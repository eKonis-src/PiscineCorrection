/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:28:21 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/20 22:41:59 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char *dest = malloc(sizeof(char) * 20);
	const char *src = "blabla";
	const char *src2 = "";
	printf("%s %s\n", ft_strncat(dest, "blabla", 4), strncat(dest, src, 4));
	printf("%s %s\n", ft_strncat(dest, "", 2), strncat(dest, src2, 2));
	printf("%s\n", ft_strncat(dest, NULL, 5));
}
