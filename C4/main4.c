#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    printf("\n\"~#This is C0rrect#@!~\" : ");
    printf("%s",(ft_str_is_printable("~#This is C0rrect#@!~") == 1 ? "Pass" : "Faill"));
    printf("\nEmpty : ");
    printf("%s",(ft_str_is_printable("") == 1 ? "Pass" : "Fail"));
    printf("\nThis Should Fail : ");
    printf("%s",(ft_str_is_printable("\x01 \x02 \x1f") == 0 ? "Pass" : "Fail"));
    printf("\nThis Should Fail too : ");
    printf("%s\n",(ft_str_is_printable("A string with \x1f and also \x14") == 0 ? "Pass" : "Fail"));
    return (0);
}