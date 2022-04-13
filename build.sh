#/bin/bash

export PREFIX="$HOME/opt/cross"
export TARGET=i686-elf
export PATH="$PREFIX/bin:$PATH"

mkdir bin 
mkdir build 
mkdir ./build/boot 
mkdir ./build/idt 
mkdir ./build/io 
mkdir ./build/memory 
mkdir ./build/memory/heap
mkdir ./build/memory/paging

echo "\e[34m####### Start compiling #######\e[0m"
make all