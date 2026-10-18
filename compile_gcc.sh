#!/bin/bash

if [ -z "$1" ]; then
    echo "Use: $0 <name_without_extension>"
    exit 1
fi

gcc -Wall -Wextra -std=c99 -g -o "$1" "$1.c"