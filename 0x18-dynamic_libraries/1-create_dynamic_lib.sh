#!/bin/bash
c_files=$(find . -name "*.c")
gcc -shared -o liball.so $c_files
