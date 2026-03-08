#include <stdio.h>
#include <string.h>

char    *ft_strcapitalize(char *str);

int main(void)
{
    char *t1 = strdup("hell 0o i'm MARVIN");
    char *t2 = strdup("");
    char *t3 = strdup("full low");
    printf("\nTest 1 : hell 0o i'm MARVIN : ");
    printf("%s",ft_strcapitalize(t1));
    printf("\nTest 2 : Empty : ");
    printf("%s",ft_strcapitalize(t2));
    printf("\nTest 3 : full low : ");
    printf("%s\n",ft_strcapitalize(t3));
    return (0);
}   
