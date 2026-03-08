#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    printf("\n\"thisiscorrect\" : ");
    printf("%s",(ft_str_is_lowercase("thisiscorrect") == 1 ? "Pass" : "Faill"));
    printf("\nEmpty : ");
    printf("%s",(ft_str_is_lowercase("") == 1 ? "Pass" : "Fail"));
    printf("\n\"This Should Fail\" : ");
    printf("%s",(ft_str_is_lowercase("This Should Fail") == 0 ? "Pass" : "Fail"));
    printf("\n\"ThisShouldF4ilT00\" : ");
    printf("%s\n",(ft_str_is_lowercase("ThisShouldF4ilT00") == 0 ? "Pass" : "Fail"));
    return (0);
}