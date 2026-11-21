"""Regenerate stubs.S, names.h, SDL2.def and exports.txt from the game's SDL2.dll.
Usage: python tools/gen_stubs.py path/to/SDL2.dll   (needs: pip install pefile)"""
import sys, os, pefile
HOOKED = {'SDL_HapticOpen','SDL_HapticOpenFromJoystick','SDL_HapticClose','SDL_HapticNewEffect',
  'SDL_HapticUpdateEffect','SDL_HapticRunEffect','SDL_HapticStopEffect','SDL_HapticDestroyEffect',
  'SDL_HapticGetEffectStatus','SDL_HapticSetGain','SDL_HapticStopAll','SDL_JoystickGetVendor',
  'SDL_JoystickGetProduct','SDL_JoystickGetDeviceVendor','SDL_JoystickGetDeviceProduct',
  'SDL_PollEvent','SDL_PumpEvents','SDL_JoystickUpdate','SDL_WaitEventTimeout'}
pe = pefile.PE(sys.argv[1])
ex = [e.name.decode() for e in pe.DIRECTORY_ENTRY_EXPORT.symbols if e.name]
missing = HOOKED - set(ex)
if missing: sys.exit(f"missing hooked exports: {missing}")
out = os.path.join(os.path.dirname(__file__), '..', 'src')
with open(os.path.join(out, 'exports.txt'), 'w') as f: f.write('\n'.join(ex))
with open(os.path.join(out, 'stubs.S'), 'w') as f:
    f.write('.text\n')
    for i, n in enumerate(ex):
        if n not in HOOKED: f.write(f'.globl {n}\n{n}:\n  jmp *real_ptrs+{i*8}(%rip)\n')
with open(os.path.join(out, 'names.h'), 'w') as f:
    f.write(f'#define NUM_EXPORTS {len(ex)}\nstatic const char* export_names[NUM_EXPORTS]={{\n')
    f.write(',\n'.join(f'"{n}"' for n in ex) + '};\n')
    for i, n in enumerate(ex): f.write(f'#define IDX_{n} {i}\n')
with open(os.path.join(out, 'SDL2.def'), 'w') as f:
    f.write('LIBRARY SDL2.dll\nEXPORTS\n' + ''.join(f'  {n}\n' for n in ex))
print(f"{len(ex)} exports written to src/")
