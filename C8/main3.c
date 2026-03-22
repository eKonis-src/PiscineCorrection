/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:11:22 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/20 22:25:30 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d %d\n", ft_strncmp("Salut", "Salut", 5), strncmp("Salut", "Salut", 5));
	printf("%d %d\n", ft_strncmp("Sal", "Salut", 4), strncmp("Sal", "Salut", 4));
	printf("%d %d\n", ft_strncmp("", "Salut", 6), strncmp("", "Salut", 6));
	printf("%d %d\n", ft_strncmp("Sal", "", 0), strncmp("Sal", "", 0));
}
