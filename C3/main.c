#define AC_RED "\x1b[31m"
#define AC_GREEN "\x1b[32m"
#define AC_NORMAL "\x1b[m"

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
	printf("\n\n####ft_ft####\n");
	ft_ft(&fortytwo);
	printf("%s\n", fortytwo == 42 ? "ft_ft : Pass" : "ft_ft : Fail");

	printf("\n\n####ft_ultimate_ft####\n");
	int fttwo = 10;
	int *ptr = &fttwo;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);
	printf("%s\n", fttwo == 42 ? "ft_ultimate_ft : Pass" : "ft_ultimate_ft : Fail");

	printf("\n\n####ft_swap####\n");
	int a = 10;
	int b = 5;
	ft_swap(&a, &b);
	printf("%s\n", (a == 5 && b == 10) ? "ft_swap : Pass" : "ft_swap : Fail");

	printf("\n\n####ft_div_mod####\n");
	int div = 0;
	int mod = 0;

	ft_div_mod(10, 7, &div, &mod);
	printf("%s\n", (div == 1 && mod == 3) ? "ft_div_mod : Pass " : "ft_div_mod : Fail");

	printf("\n\n####ft_div_ultimate_mod####\n");
	int div2 = 10;
	int mod2 = 7;

	ft_ultimate_div_mod(&div2, &mod2);
	printf("%s\n", (div2 == 1 && mod2 == 3) ? "ft_ultimate_div_mod : Pass " : "ft_ultimate_div_mod : Fail");

	printf("\n\n####ft_rev_int_tab####\n");
	int tab[4] = {1,2,3,4};
	printf("Input : %d;%d;%d;%d\n",tab[0],tab[1],tab[2],tab[3]);
	ft_rev_int_tab(tab, 4);
	printf("Output : %d;%d;%d;%d\n",tab[0],tab[1],tab[2],tab[3]);
	printf("%s\n", (tab[0] == 4 && tab[1] == 3 && tab[2] == 2 && tab[3] == 1) ? "ft_rev_tab even : Pass " : "ft_rev_tab even : Fail");
	

	int tab2[3] = {1,2,3,};
	printf("Input : %d;%d;%d\n",tab2[0],tab2[1],tab2[2]);
	ft_rev_int_tab(tab2, 3);
	printf("Output : %d;%d;%d\n",tab2[0],tab2[1],tab2[2]);
	printf("%s\n", (tab2[0] == 3 && tab2[1] == 2 && tab2[2] == 1) ? "ft_rev_tab odd : Pass " : "ft_rev_tab odd : Fail");
	
	printf("\n\n####ft_sort_int_tab####\n");
	int tab3[10] = {8,6,9,4,5,1,2,7,3,0};

	printf("Input : %d;%d;%d;%d;%d;%d;%d;%d;%d;%d\n",tab3[0],tab3[1],tab3[2],tab3[3],tab3[4],tab3[5],tab3[6],tab3[7],tab3[8],tab3[9]);
	ft_sort_int_tab(tab3, 10);
	printf("Output :%d;%d;%d;%d;%d;%d;%d;%d;%d;%d\n",tab3[0],tab3[1],tab3[2],tab3[3],tab3[4],tab3[5],tab3[6],tab3[7],tab3[8],tab3[9]);
	printf("%s\n", (tab3[0] == 0 && tab3[1] == 1 && tab3[2] == 2 && tab3[3] == 3 && tab3[4] == 4 && tab3[5] == 5 && tab3[6] == 6 && tab3[7] == 7 && tab3[8] == 8 && tab3[9] == 9) ? "ft_sort_int_tab: Pass " : "ft_sort_int_tab : Fail");
	
}
