#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    printf("\n\"02124534\" : ");
    printf("%s",(ft_str_is_numeric("02124534") == 1 ? "Pass" : "Faill"));
    printf("\nEmpty : ");
    printf("%s",(ft_str_is_numeric("") == 1 ? "Pass" : "Fail"));
    printf("\n\"This Should Fail\" : ");
    printf("%s",(ft_str_is_numeric("This Should Fail") == 0 ? "Pass" : "Fail"));
    printf("\n\"ThisShouldF4ilT00\" : ");
    printf("%s\n",(ft_str_is_numeric("ThisShouldF4ilT00") == 0 ? "Pass" : "Fail"));
    return (0);
}