/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:28:21 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/20 22:39:20 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char *dest = malloc(sizeof(char) * 20);
	const char *src = "blabla";
	const char *src2 = "";
	printf("%s %s\n", ft_strcat(dest, "blabla"), strcat(dest, src));
	printf("%s %s\n", ft_strcat(dest, ""), strcat(dest, src2));
	printf("%s\n", ft_strcat(dest, NULL));
}
