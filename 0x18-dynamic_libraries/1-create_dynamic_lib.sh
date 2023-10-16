#!/bin/bash

gcc -fPIC -c *.c
gcc -shared *.o -L. -o liball.so
