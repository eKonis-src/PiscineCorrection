#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, " "));
}
