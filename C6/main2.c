#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **tab, int min, int max);

void	ft_print_tab(int *tab, int size)
{
	int	i = 0;

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	*tab;
       	ft_ultimate_range(&tab, 0, 10);
	ft_print_tab(tab, 10 - 0);
	ft_ultimate_range(&tab, 5, 0);
	ft_print_tab(tab, 0 - 5);
	ft_ultimate_range(&tab, 0, 0);
	ft_print_tab(tab, 0 - 0);
	return (0);
}
