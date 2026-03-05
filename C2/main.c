#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);

int main()
{
    printf("####Iterative Factorial####\n");
    printf("%s\n", ft_iterative_factorial(8) == 40320 ? "Factorial 8 : Pass" : "Factorial 8 : Fail");
    printf("%s\n", ft_iterative_factorial(-8) == 0 ? "Factorial -8 : Pass" : "Factorial -8 : Fail");
    printf("%s\n", ft_iterative_factorial(0) == 1 ? "Factorial 0 : Pass" : "Factorial 0 : Fail");

    printf("####Recursive Factorial####\n");
    printf("%s\n", ft_recursive_factorial(8) == 40320 ? "Factorial 8 : Pass" : "Factorial 8 : Fail");
    printf("%s\n", ft_recursive_factorial(-8) == 0 ? "Factorial -8 : Pass" : "Factorial -8 : Fail");
    printf("%s\n", ft_recursive_factorial(0) == 1 ? "Factorial 0 : Pass" : "Factorial 0 : Fail");

    printf("####Iterative Power####\n");
    printf("%s\n", ft_iterative_power(4, -3) == 0 ? "4 Power -3 : Pass" : "4 Power -3 : Fail");
    printf("%s\n", ft_iterative_power(54325, 0) == 1 ? "54325 Power 0 : Pass" : "54325 Power 0 : Fail");
    printf("%s\n", ft_iterative_power(5, 4) == 625 ? "5 Power 4 : Pass" : "5 Power 4 : Fail");

    printf("####Recursive Power####\n");
    printf("%s\n", ft_recursive_power(4, -3) == 0 ? "4 Power -3 : Pass" : "4 Power -3 : Fail");
    printf("%s\n", ft_recursive_power(54325, 0) == 1 ? "54325 Power 0 : Pass" : "54325 Power 0 : Fail");
    printf("%s\n", ft_recursive_power(5, 4) == 625 ? "5 Power 4 : Pass" : "5 Power 4 : Fail");

    printf("####Fibonacci####\n");
    printf("%s\n", ft_fibonacci(11) == 89 ? "Fibonacci 11 : Pass" : "Fibonacci 11 : Fail");
    printf("%s\n", ft_fibonacci(-1) == -1 ? "Fibonacci -1 : Pass" : "Fibonacci -1 : Fail");
    printf("%s\n", ft_fibonacci(0) == 0 ? "Fibonacci 0 : Pass" : "Fibonacci 0 : Fail");

}