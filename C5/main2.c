#include <stdio.h>

#include <stdlib.h>

int	ft_contained_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 1;
	while (str[i])
	{
		while (ft_contained_in_charset(str[i], charset) && str[i])
		{
			i++;
			flag = 1;
			if (str[i] == 0)
				return (j);
		}
		if (flag && str[i])
		{
			j++;
		}
		flag = 0;
		i++;
	}
	return (j);
}

void	ft_get_word(char *str, char *charset, int *i, int *j)
{
	while (ft_contained_in_charset(str[*i], charset) && str[*i])
		*i += 1;
	*j = *i;
	while (!ft_contained_in_charset(str[*j], charset) && str[*j])
		*j += 1;
}

char	**ft_split(char *str, char *charset)
{
	int		nb_words;
	int		i;
	int		j;
	int		k;
	char	**toReturn;

	nb_words = ft_count_words(str, charset);
	i = 0;
	j = 0;
	k = 0;
	toReturn = malloc(sizeof(char *) * nb_words + 1);
	while (i < nb_words)
	{
		ft_get_word(str, charset, &k, &j);
		toReturn[i] = malloc(sizeof(char) * (j - k) + 1);
		ft_strncat(toReturn[i], &str[k], (j - k));
		k = j;
		i++;
	}
	toReturn[i] = malloc(sizeof(char) * 1);
	toReturn[i] = 0;
	return (toReturn);
}

int ft_any(char **tab, int(*f)(char*));

int	ft_char_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_numeric(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
    char **tab = ft_split("ctest 542687435 other test", " ");
    printf("%d ?\n", ft_any(tab, &ft_str_is_numeric));
}