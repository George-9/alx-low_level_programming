#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c -o lib.o
ar -rc liball.so *.o
