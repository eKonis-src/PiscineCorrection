#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

printf "####${GREEN}C Strings${NC}####\n"

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

printf "####${GREEN}EX5${NC}####\n"
gcc -Wall -Werror -Wextra main5.c ../ex5/*.c
./a.out

printf "####${GREEN}EX6${NC}####\n"
gcc -Wall -Werror -Wextra main6.c ../ex6/*.c
./a.out

printf "####${GREEN}EX7${NC}####\n"
gcc -Wall -Werror -Wextra main7.c ../ex7/*.c
./a.out

printf "####${GREEN}EX8${NC}####\n"
gcc -Wall -Werror -Wextra main8.c ../ex8/*.c
./a.out

printf "####${GREEN}EX9${NC}####\n"
gcc -Wall -Werror -Wextra main9.c ../ex9/*.c
./a.out

printf "####${GREEN}EX10${NC}####\n"
gcc -Wall -Werror -Wextra main10.c ../ex10/*.c
./a.out
printf "\n\n####${GREEN}Tester Done${NC}####\n"
