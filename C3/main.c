#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void 	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int fortytwo = 0;
	printf("####ft_ft####\n");
	ft_ft(*fortytwo);
	printf("%s\n", fortytwo == 42 ? "ft_ft : Pass" : "ft_ft : Fail");

	printf("####ft_ultimate_ft####\n");
	int *********fttwo = 0;

	ft_ultimate_ft(&&&&&&&&&fttwo);
	printf("%s\n", *********fttwo == 42 ? "ft_ultimate_ft : Pass" : "ft_ultimate_ft : Fail");

	printf("####ft_swap####\n");
	int a = 10;
	int b = 5;
	ft_swap(&a, &b);
	printf("%s\n", (a == 5 && b == 10) ? "ft_swap : Pass" : "ft_swap : Fail");

	printf("####ft_div_mod####\n");
	int div = 0;
	int mod = 0;

	ft_div_mod(10, 7, &div, &mod);
	printf("%s\n", (div == 1 && mod == 3) ? "ft_div_mod : Pass " : "ft_div_mod : Fail");

	printf("####ft_div_ultimate_mod####\n");
	printf("%s\n", ft_fibonacci(0) == 0 ? "Fibonacci 0 : Pass" : "Fibonacci 0 : Fail");

}
