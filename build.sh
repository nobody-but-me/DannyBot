
#!/usr/bin/env bash

_CC=gcc
# _FLAGS=(-lraylib)
_SOURCES=./src/*.c

# ${_FLAGS[*]}
compile() {
    clear && time $_CC -o ./build/DannyBot $_SOURCES -I./include/ -I./lib/ -lm -Werror -Wall -pedantic
}

if [ $1 == "--c" ]; then
    echo -e "[INFO] Compiling only... \n"
    compile;
elif [ $1 == "--r" ]; then
    echo -e "[INFO] Running... \n"
    ./build/DannyBot;
elif [ $1 == "--b" ]; then
    compile;
    echo "[INFO] Compiled Successfully. "
    echo -e "[INFO] Running... \n"
    ./build/DannyBot;
else
    echo "[INFO] No flag given. "
    exit 1
fi
