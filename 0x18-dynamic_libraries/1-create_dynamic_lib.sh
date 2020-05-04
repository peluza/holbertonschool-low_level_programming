#!/bin/bash
gcc -g -fPIC -c -Wall -Werror -Wextra -pedantic *.c | gcc -shared -o liball.so *.o
