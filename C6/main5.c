/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 21:28:11 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/14 21:39:25 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

void	ft_prints(char **s)
{
	int	i;
	if (!s)
	{
		printf("\n");
		return;
	}
	i = 0;
        while (s[i])
        {
                printf("%s", s[i]);
                printf("\n");
                s++;
        }
}

int	main(void)
{
	char **s = ft_split("salut les amis", " ");
	ft_prints(s);
	s = ft_split("salut les amis", "p");
	ft_prints(s);
	s = ft_split("salut les amis", "a");
	ft_prints(s);
	s = ft_split(NULL, " ");
	//ft_prints(s);
	s = ft_split("Salut les amis", NULL);
	//ft_prints(s);
	s = ft_split("Salut les amis", "");
	//ft_prints(s);
}
