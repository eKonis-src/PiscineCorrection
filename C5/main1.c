#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int test(int i)
{
    return 3 * i + 1;
}

int main(void)
{
    int tab[5] = {1, 4, 5 ,6 ,3};
    int *mapped;
    
    mapped = ft_map(tab, 5, &test);
    for(int i = 0; i < 5; i++)
    {
        printf("%d %d\n", tab[i], mapped[i]);
    }
    return (0);
}