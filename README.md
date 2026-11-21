# Bus Bound FFB fix

A drop-in `SDL2.dll` wrapper for **Bus Bound** (Steam and Epic) that fixes force feedback
cutting out after ~35 seconds on Simagic direct-drive wheels, and adds a centring spring.

## The problem
Bus Bound drives the wheel through SDL2's haptic API. SDL sends "endless" effects to
DirectInput as 4294966296 µs; the Simagic driver keeps only 16 bits of milliseconds, so every
effect stops after ~35.1 s and the wheel goes limp until something (like pressing ESC)
recreates the effects. The game's own centring spring is also effectively off.

## What the wrapper does
It forwards all 845 SDL2 (2.30.0) exports to the game's original DLL and only changes the
haptic calls:
- **35 s dropout fix**: restarts each effect after 20–28 s, at a moment when the force is low,
  so the restart can't be felt.
- **Auto-restart**: polls the driver and restarts any effect it reports as stopped.
- **Centring spring**: gives the game's spring a real strength (`spring_coeff`).
- **Gain dedupe**: drops the ~50/s repeated SetGain calls.
- Optional: friction floor/scale, length override, periodic rebuild, wheel ID spoofing.
All of it is configured in `ffb_wrapper.ini`.

## Install
Folder: `<game>\BusGame\Plugins\SAS_SDL_Packaged\Binaries\ThirdParty\SAS_SDL_PackagedLibrary\Win64\`
- Steam: `steamapps\common\Bus Bound\...`
- Epic: `Epic Games\ProjectBEEOpWjk\...` (Epic names the folder by its internal code name)

1. Close the game.
2. Rename the game's `SDL2.dll` to `SDL2_orig.dll` (and keep a copy as `SDL2.dll.backup`).
3. Copy `SDL2.dll` and `ffb_wrapper.ini` from the release zip into the folder.
4. Start the game. `ffb_wrapper_log.txt` appears in the same folder.

**Uninstall:** delete `SDL2.dll` and rename `SDL2.dll.backup` back to `SDL2.dll`.
A game update or "Verify files" replaces `SDL2.dll`; repeat steps 2–3 afterwards.

## Tuning
| Setting | What it does |
|---|---|
| `spring_coeff` | Centring strength: 2000 light, 4000 medium, 8000 heavy (0 = game default) |
| `restart_min_ms` / `restart_max_ms` | Window for the dropout-fix restart |
| `friction_min` / `friction_scale` | Minimum friction and scaling of the game's friction |
| `log_updates` | Log every effect update (very verbose) |

In-game, keep **Inertia** above 0 or the wheel spins freely when the bus is stopped.

## Build
    ./build.sh                       # MinGW-w64, output in dist/
If the game ships a different SDL2.dll, regenerate the export stubs first:
    python tools/gen_stubs.py path/to/SDL2_orig.dll

Tested with a Simagic Alpha base. Not affiliated with Saber Interactive or Stillalive Studios.
SDL2 is © Sam Lantinga, zlib licence; this repo contains no SDL code.

## Licence
© 2026 inexus888. All rights reserved. You may install the official release for personal use;
any other use of the code (copying, modifying, redistributing, using it in other projects)
needs my written permission. See [LICENSE](LICENSE); ask via an issue on this repo.
