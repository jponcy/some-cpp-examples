#!/bin/sh
clear
cmake . && make && echo "" && echo "EXE" && echo "===" && ./bin/exe
