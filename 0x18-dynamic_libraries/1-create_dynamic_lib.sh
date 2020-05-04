#!/bin/bash
gcc -fPIC -c -g -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o liball.so *.o
