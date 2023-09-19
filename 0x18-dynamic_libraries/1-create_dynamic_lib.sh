#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o -o liball.s
export LD_LIBRARY_PATH=. :$LD_LIBRARY_PATH
