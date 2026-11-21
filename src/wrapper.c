// Bus Bound FFB wrapper: proxy SDL2.dll that forwards everything to SDL2_orig.dll
// and fixes force-feedback dropouts on the Simagic driver.
#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include "names.h"

typedef uint8_t Uint8; typedef uint16_t Uint16; typedef int16_t Sint16;
typedef uint32_t Uint32; typedef int32_t Sint32;

#define HAP_CONSTANT (1u<<0)
#define HAP_SINE (1u<<1)
#define HAP_LEFTRIGHT (1u<<2)
#define HAP_TRIANGLE (1u<<3)
#define HAP_SAWUP (1u<<4)
#define HAP_SAWDOWN (1u<<5)
#define HAP_RAMP (1u<<6)
#define HAP_SPRING (1u<<7)
#define HAP_DAMPER (1u<<8)
#define HAP_INERTIA (1u<<9)
#define HAP_FRICTION (1u<<10)
#define HAP_CUSTOM (1u<<11)
#define HAP_STATUS (1u<<14)
#define HAP_INFINITY 4294967295U

typedef struct { Uint8 type; Sint32 dir[3]; } HDir;
typedef struct { Uint16 type; HDir direction; Uint32 length; Uint16 delay, button, interval;
  Sint16 level; Uint16 attack_length, attack_level, fade_length, fade_level; } HConstant;
typedef struct { Uint16 type; HDir direction; Uint32 length; Uint16 delay, button, interval;
  Uint16 period; Sint16 magnitude; Sint16 offset; Uint16 phase;
  Uint16 attack_length, attack_level, fade_length, fade_level; } HPeriodic;
typedef struct { Uint16 type; HDir direction; Uint32 length; Uint16 delay, button, interval;
  Uint16 right_sat[3], left_sat[3]; Sint16 right_coeff[3], left_coeff[3];
  Uint16 deadband[3]; Sint16 center[3]; } HCondition;
typedef struct { Uint16 type; HDir direction; Uint32 length; Uint16 delay, button, interval;
  Sint16 start, end; Uint16 attack_length, attack_level, fade_length, fade_level; } HRamp;
typedef struct { Uint16 type; Uint32 length; Uint16 large_magnitude, small_magnitude; } HLeftRight;
typedef struct { Uint16 type; HDir direction; Uint32 length; Uint16 delay, button, interval;
  Uint8 channels; Uint16 period, samples; Uint16 *data;
  Uint16 attack_length, attack_level, fade_length, fade_level; } HCustom;
typedef union { Uint16 type; HConstant constant; HPeriodic periodic; HCondition condition;
  HRamp ramp; HLeftRight leftright; HCustom custom; } HEffect;

typedef void SDL_Haptic; typedef void SDL_Joystick;

void *real_ptrs[NUM_EXPORTS];
#define REAL(name, ret, args) ((ret (*) args) real_ptrs[IDX_##name])

// ---------------- config ----------------
static struct {
  int log, log_updates, status_poll_ms, auto_restart, dedupe_gain, rebuild_ms;
  int restart_min_ms, restart_max_ms, restart_low_level, length_override_ms;
  int spring_coeff, spring_saturation, friction_min, friction_scale, force_infinite_length, force_infinite_iterations, keepalive_ms;
  int spoof_from_vid, spoof_from_pid, spoof_to_vid, spoof_to_pid;
} cfg;

static char dll_dir[MAX_PATH];
static FILE *logf;
static CRITICAL_SECTION cs;

static void L(const char *fmt, ...) {
  if (!logf) return;
  SYSTEMTIME t; GetLocalTime(&t);
  fprintf(logf, "%02d:%02d:%02d.%03d ", t.wHour, t.wMinute, t.wSecond, t.wMilliseconds);
  va_list a; va_start(a, fmt); vfprintf(logf, fmt, a); va_end(a);
  fputc('\n', logf); fflush(logf);
}

static int geti(const char *ini, const char *k, int def) {
  return (int)GetPrivateProfileIntA("ffb", k, def, ini);
}

static void load_config(void) {
  char ini[MAX_PATH]; snprintf(ini, sizeof ini, "%s\\ffb_wrapper.ini", dll_dir);
  cfg.log = geti(ini, "log", 1); cfg.log_updates = geti(ini, "log_updates", 0);
  cfg.status_poll_ms = geti(ini, "status_poll_ms", 1000);
  cfg.auto_restart = geti(ini, "auto_restart", 1); cfg.dedupe_gain = geti(ini, "dedupe_gain", 1);
  cfg.rebuild_ms = geti(ini, "rebuild_ms", 0);
  cfg.restart_min_ms = geti(ini, "restart_min_ms", 20000);
  cfg.restart_max_ms = geti(ini, "restart_max_ms", 28000);
  cfg.restart_low_level = geti(ini, "restart_low_level", 3277);
  cfg.length_override_ms = geti(ini, "length_override_ms", 0);
  cfg.spring_coeff = geti(ini, "spring_coeff", 4000);
  cfg.spring_saturation = geti(ini, "spring_saturation", 65535);
  cfg.friction_min = geti(ini, "friction_min", 0);
  cfg.friction_scale = geti(ini, "friction_scale", 100);
  cfg.force_infinite_length = geti(ini, "force_infinite_length", 0);
  cfg.force_infinite_iterations = geti(ini, "force_infinite_iterations", 0);
  cfg.keepalive_ms = geti(ini, "keepalive_ms", 0);
  cfg.spoof_from_vid = geti(ini, "spoof_from_vid", 0); cfg.spoof_from_pid = geti(ini, "spoof_from_pid", 0);
  cfg.spoof_to_vid = geti(ini, "spoof_to_vid", 0); cfg.spoof_to_pid = geti(ini, "spoof_to_pid", 0);
  if (cfg.spring_coeff > 32767) cfg.spring_coeff = 32767;
  if (cfg.friction_min > 32767) cfg.friction_min = 32767;
  if (cfg.friction_scale < 0) cfg.friction_scale = 0;
  if (cfg.restart_max_ms < cfg.restart_min_ms) cfg.restart_max_ms = cfg.restart_min_ms;
}

// ---------------- effect tracking ----------------
// The game sees "virtual" effect ids (slot index). We map them to the real SDL ids so
// effects can be destroyed and recreated (rebuild) without the game noticing.
#define MAX_SLOTS 64
typedef struct {
  int used, real_id, running, ours;
  SDL_Haptic *h;
  HEffect eff;
  Uint32 iterations;
  DWORD started, last_poll, last_rebuild;
  unsigned restarts;
} Slot;
static Slot slots[MAX_SLOTS];
static SDL_Haptic *cur_haptic;
static unsigned int haptic_caps;
static int last_gain = -1;
static int game_has_spring;
static int our_spring = -1;
static int game_has_friction;
static int our_friction = -1;
static int open_fail_count;
static DWORD last_tick;

static const char *tname(Uint16 t) {
  switch (t) {
  case HAP_CONSTANT: return "constant"; case HAP_SINE: return "sine";
  case HAP_LEFTRIGHT: return "leftright"; case HAP_TRIANGLE: return "triangle";
  case HAP_SAWUP: return "sawup"; case HAP_SAWDOWN: return "sawdown";
  case HAP_RAMP: return "ramp"; case HAP_SPRING: return "spring";
  case HAP_DAMPER: return "damper"; case HAP_INERTIA: return "inertia";
  case HAP_FRICTION: return "friction"; case HAP_CUSTOM: return "custom";
  } return "?";
}

static Uint32 *len_ptr(HEffect *e) {
  switch (e->type) {
  case HAP_CONSTANT: return &e->constant.length;
  case HAP_SINE: case HAP_TRIANGLE: case HAP_SAWUP: case HAP_SAWDOWN: return &e->periodic.length;
  case HAP_RAMP: return &e->ramp.length;
  case HAP_SPRING: case HAP_DAMPER: case HAP_INERTIA: case HAP_FRICTION: return &e->condition.length;
  case HAP_LEFTRIGHT: return &e->leftright.length;
  case HAP_CUSTOM: return &e->custom.length;
  } return NULL;
}

// Current force level of an effect, 0..32767ish. Condition effects count as 0 (low).
static int level_of(const HEffect *e) {
  switch (e->type) {
  case HAP_CONSTANT: return abs(e->constant.level);
  case HAP_SINE: case HAP_TRIANGLE: case HAP_SAWUP: case HAP_SAWDOWN:
    return abs(e->periodic.magnitude) + abs(e->periodic.offset);
  case HAP_RAMP: { int a = abs(e->ramp.start), b = abs(e->ramp.end); return a > b ? a : b; }
  } return 0;
}

static void modify_friction(HEffect *e);
static void modify(HEffect *e) {
  Uint32 *len = len_ptr(e);
  if (len) {
    if (cfg.force_infinite_length) *len = HAP_INFINITY;
    else if (cfg.length_override_ms > 0 && *len == HAP_INFINITY) *len = (Uint32)cfg.length_override_ms;
  }
  if (e->type == HAP_SPRING && cfg.spring_coeff > 0) {
    for (int i = 0; i < 3; i++) {
      e->condition.right_coeff[i] = (Sint16)cfg.spring_coeff;
      e->condition.left_coeff[i] = (Sint16)cfg.spring_coeff;
      Uint16 cap = (Uint16)cfg.spring_saturation;
      if (e->condition.right_sat[i] == 0 || e->condition.right_sat[i] > cap) e->condition.right_sat[i] = cap;
      if (e->condition.left_sat[i] == 0 || e->condition.left_sat[i] > cap) e->condition.left_sat[i] = cap;
    }
  }
  modify_friction(e);
}

static Sint16 fric(Sint16 c) {
  long v = (long)c * cfg.friction_scale / 100;
  if (v > 32767) v = 32767; if (v < -32767) v = -32767;
  if (cfg.friction_min > 0 && labs(v) < cfg.friction_min) v = cfg.friction_min;
  return (Sint16)v;
}

static void modify_friction(HEffect *e) {
  if (e->type != HAP_FRICTION) return;
  if (cfg.friction_scale == 100 && cfg.friction_min <= 0) return;
  for (int i = 0; i < 3; i++) {
    e->condition.right_coeff[i] = fric(e->condition.right_coeff[i]);
    e->condition.left_coeff[i] = fric(e->condition.left_coeff[i]);
    if (cfg.friction_min > 0) {
      if (e->condition.right_sat[i] == 0) e->condition.right_sat[i] = 65535;
      if (e->condition.left_sat[i] == 0) e->condition.left_sat[i] = 65535;
    }
  }
}

static int slot_valid(SDL_Haptic *h, int id) {
  return id >= 0 && id < MAX_SLOTS && slots[id].used && slots[id].h == h;
}

static void run_real(Slot *s, const char *why) {
  int r = REAL(SDL_HapticRunEffect, int, (SDL_Haptic*, int, Uint32))(s->h, s->real_id, s->iterations);
  s->started = GetTickCount(); s->running = 1; s->restarts++;
  L("restart %s effect slot=%d (%s) -> %d, restarts=%u", tname(s->eff.type), (int)(s - slots), why, r, s->restarts);
}

static void rebuild(Slot *s) {
  REAL(SDL_HapticDestroyEffect, void, (SDL_Haptic*, int))(s->h, s->real_id);
  HEffect copy = s->eff;
  int nid = REAL(SDL_HapticNewEffect, int, (SDL_Haptic*, HEffect*))(s->h, &copy);
  L("rebuild %s slot=%d real %d -> %d", tname(s->eff.type), (int)(s - slots), s->real_id, nid);
  if (nid >= 0) { s->real_id = nid; if (s->running) run_real(s, "rebuild"); }
}

static void destroy_extra(SDL_Haptic *h, int *slot) {
  if (*slot < 0) return;
  if (slots[*slot].used) REAL(SDL_HapticDestroyEffect, void, (SDL_Haptic*, int))(h, slots[*slot].real_id);
  slots[*slot].used = 0; *slot = -1;
}

static void create_extra(SDL_Haptic *h, Uint16 type, int *slot, const char *what) {
  if (*slot >= 0) return;
  if (!(haptic_caps & type)) { L("wheel does not report %s support; no extra %s", tname(type), tname(type)); return; }
  int i; for (i = 0; i < MAX_SLOTS && slots[i].used; i++);
  if (i == MAX_SLOTS) return;
  HEffect e; memset(&e, 0, sizeof e);
  e.type = type; e.condition.direction.type = 1; /* SDL_HAPTIC_CARTESIAN */
  e.condition.direction.dir[0] = 1;
  e.condition.length = HAP_INFINITY;
  modify(&e);
  int rid = REAL(SDL_HapticNewEffect, int, (SDL_Haptic*, HEffect*))(h, &e);
  if (rid < 0) { L("could not create extra %s", tname(type)); return; }
  Slot *s = &slots[i]; memset(s, 0, sizeof *s);
  s->used = 1; s->ours = 1; s->h = h; s->real_id = rid; s->eff = e; s->iterations = 1;
  *slot = i;
  run_real(s, what);
  L("game has no %s effect, created our own (coeff %d) slot=%d", tname(type), e.condition.right_coeff[0], i);
}

static void create_extras(SDL_Haptic *h) {
  if (cfg.spring_coeff > 0 && !game_has_spring) create_extra(h, HAP_SPRING, &our_spring, "start extra spring");
  if (cfg.friction_min > 0 && !game_has_friction) create_extra(h, HAP_FRICTION, &our_friction, "start extra friction");
}

// Called often from the game's thread (event pump, effect updates).
static void tick(void) {
  DWORD now = GetTickCount();
  if (now - last_tick < 50) return;
  last_tick = now;
  for (int i = 0; i < MAX_SLOTS; i++) {
    Slot *s = &slots[i];
    if (!s->used || !s->running) continue;
    DWORD age = now - s->started;
    if (cfg.status_poll_ms > 0 && (haptic_caps & HAP_STATUS) && now - s->last_poll >= (DWORD)cfg.status_poll_ms) {
      s->last_poll = now;
      int st = REAL(SDL_HapticGetEffectStatus, int, (SDL_Haptic*, int))(s->h, s->real_id);
      if (st == 0) {
        L("driver says %s slot=%d stopped after %lu ms", tname(s->eff.type), i, (unsigned long)age);
        if (cfg.auto_restart) { run_real(s, "auto_restart"); continue; }
      }
    }
    if (cfg.rebuild_ms > 0 && now - s->last_rebuild >= (DWORD)cfg.rebuild_ms) {
      s->last_rebuild = now; rebuild(s); continue;
    }
    if (cfg.keepalive_ms > 0 && age >= (DWORD)cfg.keepalive_ms) { run_real(s, "keepalive"); continue; }
    if (cfg.restart_min_ms > 0 && age >= (DWORD)cfg.restart_min_ms) {
      if (level_of(&s->eff) <= cfg.restart_low_level) run_real(s, "35s fix, low force");
      else if (age >= (DWORD)cfg.restart_max_ms) run_real(s, "35s fix, max time");
    }
  }
}

// ---------------- hooks ----------------
#define EXPORT __declspec(dllexport)

static void on_open(SDL_Haptic *h, const char *how) {
  if (!h) { if (++open_fail_count == 1 || open_fail_count % 10000 == 0) L("%s failed (x%d, a device without force feedback)", how, open_fail_count); return; }
  cur_haptic = h;
  haptic_caps = REAL(SDL_HapticQuery, unsigned int, (SDL_Haptic*))(h);
  L("%s ok, caps=0x%x (status %s)", how, haptic_caps, (haptic_caps & HAP_STATUS) ? "yes" : "no");
}

EXPORT SDL_Haptic *SDL_HapticOpen(int idx) {
  SDL_Haptic *h = REAL(SDL_HapticOpen, SDL_Haptic*, (int))(idx);
  EnterCriticalSection(&cs); on_open(h, "HapticOpen"); LeaveCriticalSection(&cs); return h;
}
EXPORT SDL_Haptic *SDL_HapticOpenFromJoystick(SDL_Joystick *j) {
  SDL_Haptic *h = REAL(SDL_HapticOpenFromJoystick, SDL_Haptic*, (SDL_Joystick*))(j);
  EnterCriticalSection(&cs); on_open(h, "HapticOpenFromJoystick"); LeaveCriticalSection(&cs); return h;
}
EXPORT void SDL_HapticClose(SDL_Haptic *h) {
  EnterCriticalSection(&cs);
  for (int i = 0; i < MAX_SLOTS; i++) if (slots[i].used && slots[i].h == h) slots[i].used = 0;
  if (cur_haptic == h) { cur_haptic = NULL; our_spring = -1; our_friction = -1; game_has_spring = 0; game_has_friction = 0; last_gain = -1; }
  L("HapticClose");
  LeaveCriticalSection(&cs);
  REAL(SDL_HapticClose, void, (SDL_Haptic*))(h);
}

EXPORT int SDL_HapticNewEffect(SDL_Haptic *h, HEffect *e) {
  if (!e) return REAL(SDL_HapticNewEffect, int, (SDL_Haptic*, HEffect*))(h, e);
  EnterCriticalSection(&cs);
  int i; for (i = 0; i < MAX_SLOTS && slots[i].used; i++);
  HEffect copy = *e; modify(&copy);
  int rid = REAL(SDL_HapticNewEffect, int, (SDL_Haptic*, HEffect*))(h, &copy);
  int ret = rid;
  if (rid >= 0 && i < MAX_SLOTS) {
    Slot *s = &slots[i]; memset(s, 0, sizeof *s);
    s->used = 1; s->h = h; s->real_id = rid; s->eff = copy; s->iterations = 1;
    s->last_rebuild = GetTickCount();
    ret = i;
    if (copy.type == HAP_SPRING) { game_has_spring = 1; destroy_extra(h, &our_spring); }
    if (copy.type == HAP_FRICTION) { game_has_friction = 1; destroy_extra(h, &our_friction); }
  } else if (rid >= 0) {
    L("out of slots, effect not tracked");
  }
  Uint32 *len = len_ptr(&copy);
  L("NewEffect %s len=%lu -> slot=%d real=%d", tname(copy.type), len ? (unsigned long)*len : 0UL, ret, rid);
  LeaveCriticalSection(&cs);
  return ret;
}

EXPORT int SDL_HapticUpdateEffect(SDL_Haptic *h, int id, HEffect *e) {
  EnterCriticalSection(&cs);
  int r;
  if (slot_valid(h, id) && e) {
    Slot *s = &slots[id];
    HEffect copy = *e; modify(&copy);
    if (copy.type & (HAP_SPRING|HAP_DAMPER|HAP_INERTIA|HAP_FRICTION)) {
      int was = s->eff.condition.right_coeff[0], now = copy.condition.right_coeff[0];
      if (abs(now - was) >= 1000) L("%s slot=%d strength %d -> %d (game sent %d)", tname(copy.type), id, was, now, e->condition.right_coeff[0]);
    }
    s->eff = copy;
    r = REAL(SDL_HapticUpdateEffect, int, (SDL_Haptic*, int, HEffect*))(h, s->real_id, &copy);
    if (cfg.log_updates) L("UpdateEffect slot=%d %s level=%d -> %d", id, tname(copy.type), level_of(&copy), r);
  } else {
    r = REAL(SDL_HapticUpdateEffect, int, (SDL_Haptic*, int, HEffect*))(h, id, e);
  }
  tick();
  LeaveCriticalSection(&cs);
  return r;
}

EXPORT int SDL_HapticRunEffect(SDL_Haptic *h, int id, Uint32 iterations) {
  EnterCriticalSection(&cs);
  int r;
  if (cfg.force_infinite_iterations) iterations = HAP_INFINITY;
  if (slot_valid(h, id)) {
    Slot *s = &slots[id];
    s->iterations = iterations;
    r = REAL(SDL_HapticRunEffect, int, (SDL_Haptic*, int, Uint32))(h, s->real_id, iterations);
    s->running = 1; s->started = GetTickCount(); s->last_poll = s->started;
    L("RunEffect slot=%d %s iter=%lu -> %d", id, tname(s->eff.type), (unsigned long)iterations, r);
    create_extras(h);
  } else {
    r = REAL(SDL_HapticRunEffect, int, (SDL_Haptic*, int, Uint32))(h, id, iterations);
  }
  LeaveCriticalSection(&cs);
  return r;
}

EXPORT int SDL_HapticStopEffect(SDL_Haptic *h, int id) {
  EnterCriticalSection(&cs);
  int r;
  if (slot_valid(h, id)) {
    slots[id].running = 0;
    r = REAL(SDL_HapticStopEffect, int, (SDL_Haptic*, int))(h, slots[id].real_id);
    L("StopEffect slot=%d -> %d", id, r);
  } else r = REAL(SDL_HapticStopEffect, int, (SDL_Haptic*, int))(h, id);
  LeaveCriticalSection(&cs);
  return r;
}

EXPORT void SDL_HapticDestroyEffect(SDL_Haptic *h, int id) {
  EnterCriticalSection(&cs);
  if (slot_valid(h, id)) {
    REAL(SDL_HapticDestroyEffect, void, (SDL_Haptic*, int))(h, slots[id].real_id);
    if (slots[id].eff.type == HAP_SPRING) game_has_spring = 0;
    if (slots[id].eff.type == HAP_FRICTION) game_has_friction = 0;
    slots[id].used = 0;
    L("DestroyEffect slot=%d", id);
  } else REAL(SDL_HapticDestroyEffect, void, (SDL_Haptic*, int))(h, id);
  LeaveCriticalSection(&cs);
}

EXPORT int SDL_HapticGetEffectStatus(SDL_Haptic *h, int id) {
  EnterCriticalSection(&cs);
  int rid = slot_valid(h, id) ? slots[id].real_id : id;
  LeaveCriticalSection(&cs);
  return REAL(SDL_HapticGetEffectStatus, int, (SDL_Haptic*, int))(h, rid);
}

EXPORT int SDL_HapticSetGain(SDL_Haptic *h, int gain) {
  if (cfg.dedupe_gain && gain == last_gain) return 0;
  int r = REAL(SDL_HapticSetGain, int, (SDL_Haptic*, int))(h, gain);
  if (gain != last_gain) L("SetGain %d -> %d", gain, r);
  last_gain = gain;
  return r;
}

EXPORT int SDL_HapticStopAll(SDL_Haptic *h) {
  EnterCriticalSection(&cs);
  for (int i = 0; i < MAX_SLOTS; i++)
    if (slots[i].used && slots[i].h == h && !slots[i].ours) slots[i].running = 0;
  L("StopAll");
  int r = REAL(SDL_HapticStopAll, int, (SDL_Haptic*))(h);
  if (our_spring >= 0 && slots[our_spring].used) run_real(&slots[our_spring], "spring after StopAll");
  if (our_friction >= 0 && slots[our_friction].used) run_real(&slots[our_friction], "friction after StopAll");
  LeaveCriticalSection(&cs);
  return r;
}

// ---- wheel ID spoofing ----
static Uint16 spoof(Uint16 vid, Uint16 pid, int want_vid) {
  if (cfg.spoof_from_vid && vid == cfg.spoof_from_vid && (!cfg.spoof_from_pid || pid == cfg.spoof_from_pid))
    return want_vid ? (Uint16)cfg.spoof_to_vid : (Uint16)cfg.spoof_to_pid;
  return want_vid ? vid : pid;
}
EXPORT Uint16 SDL_JoystickGetVendor(SDL_Joystick *j) {
  Uint16 v = REAL(SDL_JoystickGetVendor, Uint16, (SDL_Joystick*))(j);
  Uint16 p = REAL(SDL_JoystickGetProduct, Uint16, (SDL_Joystick*))(j);
  return spoof(v, p, 1);
}
EXPORT Uint16 SDL_JoystickGetProduct(SDL_Joystick *j) {
  Uint16 v = REAL(SDL_JoystickGetVendor, Uint16, (SDL_Joystick*))(j);
  Uint16 p = REAL(SDL_JoystickGetProduct, Uint16, (SDL_Joystick*))(j);
  return spoof(v, p, 0);
}
EXPORT Uint16 SDL_JoystickGetDeviceVendor(int i) {
  Uint16 v = REAL(SDL_JoystickGetDeviceVendor, Uint16, (int))(i);
  Uint16 p = REAL(SDL_JoystickGetDeviceProduct, Uint16, (int))(i);
  static int logged[16];
  if (i >= 0 && i < 16 && !logged[i]) { logged[i] = 1; L("joystick %d: vid=%u (0x%04x) pid=%u (0x%04x)", i, v, v, p, p); }
  return spoof(v, p, 1);
}
EXPORT Uint16 SDL_JoystickGetDeviceProduct(int i) {
  Uint16 v = REAL(SDL_JoystickGetDeviceVendor, Uint16, (int))(i);
  Uint16 p = REAL(SDL_JoystickGetDeviceProduct, Uint16, (int))(i);
  return spoof(v, p, 0);
}

// ---- event pump: drive the timers even when the game isn't updating effects ----
static void tick_locked(void) {
  if (TryEnterCriticalSection(&cs)) { tick(); LeaveCriticalSection(&cs); }
}
EXPORT int SDL_PollEvent(void *ev) { int r = REAL(SDL_PollEvent, int, (void*))(ev); tick_locked(); return r; }
EXPORT void SDL_PumpEvents(void) { REAL(SDL_PumpEvents, void, (void))(); tick_locked(); }
EXPORT void SDL_JoystickUpdate(void) { REAL(SDL_JoystickUpdate, void, (void))(); tick_locked(); }
EXPORT int SDL_WaitEventTimeout(void *ev, int ms) {
  int r = REAL(SDL_WaitEventTimeout, int, (void*, int))(ev, ms); tick_locked(); return r;
}

// ---------------- load ----------------
BOOL WINAPI DllMain(HINSTANCE inst, DWORD reason, LPVOID res) {
  (void)res;
  if (reason != DLL_PROCESS_ATTACH) {
    if (reason == DLL_PROCESS_DETACH && logf) { L("unload"); fclose(logf); logf = NULL; }
    return TRUE;
  }
  DisableThreadLibraryCalls(inst);
  InitializeCriticalSection(&cs);
  GetModuleFileNameA(inst, dll_dir, MAX_PATH);
  char *slash = strrchr(dll_dir, '\\'); if (slash) *slash = 0;
  load_config();
  if (cfg.log) {
    char lp[MAX_PATH]; snprintf(lp, sizeof lp, "%s\\ffb_wrapper_log.txt", dll_dir);
    logf = fopen(lp, "w");
  }
  L("Bus Bound FFB wrapper v2.1 loaded from %s", dll_dir);
  L("restart %d-%d ms below level %d, spring_coeff=%d, friction_min=%d, friction_scale=%d%%, auto_restart=%d, length_override=%d",
    cfg.restart_min_ms, cfg.restart_max_ms, cfg.restart_low_level, cfg.spring_coeff,
    cfg.friction_min, cfg.friction_scale, cfg.auto_restart, cfg.length_override_ms);
  char orig[MAX_PATH]; snprintf(orig, sizeof orig, "%s\\SDL2_orig.dll", dll_dir);
  HMODULE m = LoadLibraryExA(orig, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
  if (!m) { L("FATAL: cannot load %s (error %lu)", orig, GetLastError()); return FALSE; }
  int missing = 0;
  for (int i = 0; i < NUM_EXPORTS; i++) {
    real_ptrs[i] = (void*)GetProcAddress(m, export_names[i]);
    if (!real_ptrs[i]) missing++;
  }
  L("SDL2_orig.dll loaded, %d exports, %d missing", NUM_EXPORTS, missing);
  return TRUE;
}
