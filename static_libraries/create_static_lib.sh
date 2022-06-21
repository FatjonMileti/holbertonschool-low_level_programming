#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c  source_0.c source_1.c source_2.c
ar rc liball.a *.o
