#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int asc(int i, int j)
{
    return i - j;
}

int dsc(int i, int j)
{
    return j - i;
}

int main(void)
{
    int tab[5] = {1, 4, 5 ,6 ,3};
    int tab2[5] = {1, 2, 3 ,5 ,8};
    int tab3[5] = {21, -4, -12 ,-850 ,-17954};
    
    printf("{1, 4, 5 ,6 ,3}\nasc %d :: dsc %d\n", ft_is_sort(tab, 5, &asc), ft_is_sort(tab, 5, &dsc));
    printf("{1, 2, 3 ,5 ,8}\nasc %d :: dsc %d\n", ft_is_sort(tab2, 5, &asc), ft_is_sort(tab2, 5, &dsc));
    printf("{21, -4, -12 ,-850 ,-17954}\nasc %d :: dsc %d\n", ft_is_sort(tab3, 5, &asc), ft_is_sort(tab3, 5, &dsc));
    return (0);
}
