#!/bin/sh
gcc -c queue.c -o queue.o
gcc -c foo.c -o foo.o
gcc foo.o queue.o -o foo
