#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

printf "####${GREEN}C Pointers${NC}####\n"
gcc -Wall -Werror -Wextra main.c ../ex0/ft_ft.c ../ex1/ft_ultimate_ft.c ../ex2/ft_swap.c ../ex3/ft_div_mod.c ../ex4/ft_ultimate_div_mod.c ../ex5/ft_rev_int_tab.c ../ex6/ft_sort_int_tab.c
./a.out
printf "\n\n####${GREEN}Tester Done${NC}####\n"
