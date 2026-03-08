#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

printf "####${GREEN}C Function Pointers${NC}####\n"

printf "####${GREEN}EX0${NC}####\n"
gcc -Wall -Werror -Wextra main0.c ../ex0/*.c
./a.out

printf "####${GREEN}EX1${NC}####\n"
gcc -Wall -Werror -Wextra main1.c ../ex1/*.c
./a.out

printf "####${GREEN}EX2${NC}####\n"
gcc -Wall -Werror -Wextra main2.c ../ex2/*.c
./a.out

printf "####${GREEN}EX3${NC}####\n"
gcc -Wall -Werror -Wextra main3.c ../ex3/*.c
./a.out

printf "####${GREEN}EX4${NC}####\n"
gcc -Wall -Werror -Wextra main4.c ../ex4/*.c
./a.out

printf "\n\n####${GREEN}Tester Done${NC}####\n"
