/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 21:24:38 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/20 22:25:03 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(int argc, char **argv)
{
	char	*c;
	char	*c2;

	c = malloc(sizeof(char) * 20);
	c2 = malloc(sizeof(char) * 30);
	printf("%s %s\n", ft_strncpy(c, "test", 4), strncpy(c2, "test", 4));
	printf("%s %s\n", ft_strncpy(c, "te", 2), strncpy(c2, "te", 2));
	printf("%s %s\n", ft_strncpy(c, "test", 2), strncpy(c2, "test", 2));
	printf("%s %s\n", ft_strncpy(c, "", 2), strncpy(c2, "", 2));
	printf("\n");
}
