#!/bin/bash
wget -p .. https://raw.githubusercontent.com/cynthiaimari/alx-low_level_programming/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
