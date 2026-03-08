#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main(void)
{
    char *t1 = strdup("hell00 i'm MARVIN");
    char *t2 = strdup("");
    char *t3 = strdup("FULL CAPS");
    printf("\nTest 1 : hell00 i'm MARVIN : ");
    printf("%s",ft_strupcase(t1));
    printf("\nTest 2 : Empty : ");
    printf("%s",ft_strupcase(t2));
    printf("\nTest 3 : FULL CAPS : ");
    printf("%s\n",ft_strupcase(t3));
    return (0);
}