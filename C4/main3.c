#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    printf("\n\"THISISCORRECT\" : ");
    printf("%s",(ft_str_is_uppercase("THISISCORRECT") == 1 ? "Pass" : "Faill"));
    printf("\nEmpty : ");
    printf("%s",(ft_str_is_uppercase("") == 1 ? "Pass" : "Fail"));
    printf("\n\"This Should Fail\" : ");
    printf("%s",(ft_str_is_uppercase("This Should Fail") == 0 ? "Pass" : "Fail"));
    printf("\n\"ThisShouldF4ilT00\" : ");
    printf("%s\n",(ft_str_is_uppercase("ThisShouldF4ilT00") == 0 ? "Pass" : "Fail"));
    return (0);
}