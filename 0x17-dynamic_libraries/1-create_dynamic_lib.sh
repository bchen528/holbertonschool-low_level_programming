#!/bin/bash
gcc -c -pedantic -Wall -Werror -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.o
