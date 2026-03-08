#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
    printf("\nTest 1 : hello0 i'm MARVIN : ");
    printf("%s",(ft_strlen("hello0 i'm MARVIN") == strlen("hello0 i'm MARVIN") ? "PASS" : "FAILL"));
    printf("\nTest 2 : Empty : ");
    printf("%s",(ft_strlen("") == strlen("") ? "PASS" : "FAIL"));
    printf("\nTest 3 : full low : ");
    printf("%s\n",(ft_strlen("full low") == strlen("full low") ? "PASS" : "FAILL"));
    return (0);
}       