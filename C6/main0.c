#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *str);

int	main(void)
{
	printf("%s\n", ft_strdup("Tornade"));
	printf("%s\n", strdup("Tornade"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", strdup(""));
	printf("%s", ft_strdup(NULL));
	printf("\n");
	return (0);
}
