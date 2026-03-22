/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:45:18 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/20 23:18:59 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str = "Salut les amis";
	printf("%s\n%s\n", ft_strstr(str, "is"), strstr(str, "is"));
	printf("%s\n%s\n", ft_strstr(str, ""), strstr(str, ""));
	printf("%s\n%s\n", ft_strstr(str, "ad"), strstr(str, "ad"));
	//printf("%s\n%s\n", ft_strstr(str, NULL), strstr(str, NULL));
}
