#!/bin/bash

# Compile the program
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d

# Check if compilation was successful
if [ $? -eq 1 ]; then
    echo "Compilation successful"
else
    echo "Compilation failed"
fi

