#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char *t1 = strdup("hell00 i'm MARVIN");
    char *t2 = strdup("");
    char *t3 = strdup("full low");
    printf("\nTest 1 : hello0 i'm MARVIN : ");
    printf("%s",ft_strlowcase(t1));
    printf("\nTest 2 : Empty : ");
    printf("%s",ft_strlowcase(t2));
    printf("\nTest 3 : full low : ");
    printf("%s\n",ft_strlowcase(t3));
    return (0);
}   