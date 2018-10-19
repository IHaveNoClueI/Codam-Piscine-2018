#!/bin/bash

debug="-Wall -Wextra -Werror"

echo " "
echo "FT Lib Creator"
echo ""

if [ ! -f /ft_putchar.c ] && [ ! -f /ft_swap.c ] && [ ! -f /ft_putstr.c ] && [ ! -f /ft_strlen.c ];
then
    echo "All files found! - Preparing and Executing (3 Seconds)"
    sleep 3
    $(gcc -c $debug ft_putchar.c ft_putstr.c)
    else
        exit 1
fi