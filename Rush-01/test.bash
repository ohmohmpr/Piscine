#! /bin/bash

norminette
echo " "
echo "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
echo " "
./rush01 "5 4 3 2 1 1 2 2 2 2 5 4 3 2 1 1 2 2 2 2" | cat -e
