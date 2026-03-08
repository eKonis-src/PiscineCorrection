#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void test(int i)
{
    printf("Nb : %d\n", i);
}

int main(void)
{
    int tab[5] = {1, 4, 5 ,6 ,3};
    ft_foreach(tab, 5, &test);
    return (0);
}