#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

printf "####Put Nbr####\n"
gcc -Wall -Werror -Wextra mainNB.c ../ex0/ft_putnbr.c
./a.out > "putNbr"
diff putNbr testNbr
ret=$?
if [[ $ret -eq 0 ]]
then
    printf "${GREEN}Passed.${NC}\n"
else
    printf "${RED}Failed.${NC}\n"
fi

printf "####Print Comb####\n"
gcc -Wall -Werror -Wextra main.c ../ex1/ft_print_comb.c
./a.out > "comb"
diff comb testComb
ret=$?
if [[ $ret -eq 0 ]]
then
   	printf "${GREEN}Passed.${NC}\n"
else
   	printf "${RED}Failed.${NC}\n"
fi

printf "####Print Comb2####\n"
gcc -Wall -Werror -Wextra main2.c ../ex2/ft_print_comb2.c
./a.out > "comb2"
diff comb2 test2
ret=$?
if [[ $ret -eq 0 ]]
then
	printf "${GREEN}Passed.${NC}\n"
else
	printf "${RED}Failed.${NC}\n"
fi

printf "####Print Combn####\n"
gcc -Wall -Werror -Wextra  mainN.c ../ex3/ft_print_combn.c
./a.out > "combN"
diff combN testN
ret=$?
if [[ $ret -eq 0 ]]
then
    printf "${GREEN}Passed.${NC}\n"
else
    printf "${RED}Failed.${NC}\n"
fi

