#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

printf "####C Arithmetics####\n"
gcc -Wall -Werror -Wextra main.c ../ex0/ft_iterative_factorial.c ../ex1/ft_recursive_factorial.c ../ex2/ft_iterative_power.c ../ex3/ft_recursive_power.c ../ex4/ft_fibonacci.c
./a.out
printf "####${GREEN}Tester Done${NC}####\n"
