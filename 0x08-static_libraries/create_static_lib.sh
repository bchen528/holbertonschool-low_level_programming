#!/bin/bash
gcc -c -pedantic -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
