#!/bin/bash
gcc -fPIC -c *.c | gcc -shared -o liball.so *.c | gcc -o main 0-main.c liball.so
