#!/bin/sh
# Build with MinGW-w64 (Linux/WSL: apt install gcc-mingw-w64-x86-64)
set -e
cd "$(dirname "$0")"
mkdir -p dist
x86_64-w64-mingw32-gcc -O2 -shared -o dist/SDL2.dll src/wrapper.c src/stubs.S src/SDL2.def -static-libgcc
cp ffb_wrapper.ini dist/
echo "built dist/SDL2.dll"
