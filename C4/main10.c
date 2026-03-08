#include <stdio.h>
#include <string.h>

void ft_putstr_non_printable(char *str);

int main(void)
{

    ft_putstr_non_printable("hello0\x17 i'm MARVIN\n");
    ft_putstr_non_printable("");
    ft_putstr_non_printable("\n");
    ft_putstr_non_printable("\x11\x17\x0\x1f\n");
    return (0);
}   