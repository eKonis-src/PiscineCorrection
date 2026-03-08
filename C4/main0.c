#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    printf("\n\"ThisIsACorrectOne\" : ");
    printf("%s",(ft_str_is_alpha("ThisIsACorrectOne") == 1 ? "Pass" : "Faill"));
    printf("\nEmpty : ");
    printf("%s",(ft_str_is_alpha("") == 1 ? "Pass" : "Fail"));
    printf("\n\"This Should Fail\" : ");
    printf("%s",(ft_str_is_alpha("This Should Fail") == 0 ? "Pass" : "Fail"));
    printf("\n\"ThisShouldF4ilT00\" : ");
    printf("%s\n",(ft_str_is_alpha("ThisShouldF4ilT00") == 0 ? "Pass" : "Fail"));
    return (0);
}