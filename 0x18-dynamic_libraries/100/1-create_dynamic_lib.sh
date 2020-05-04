#!/bin/bash
gcc -fPIC -c -g -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o 100-operations.so *.o
