/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:11:22 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/20 22:25:17 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d %d\n", ft_strcmp("Salut", "Salut"), strcmp("Salut", "Salut"));
	printf("%d %d\n", ft_strcmp("Sal", "Salut"), strcmp("Sal", "Salut"));
	printf("%d %d\n", ft_strcmp("", "Salut"), strcmp("", "Salut"));
	printf("%d %d\n", ft_strcmp("Sal", ""), strcmp("Sal", ""));
}
