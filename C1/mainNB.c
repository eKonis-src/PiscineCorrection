/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainNB.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:56:29 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/05 00:50:09 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(4);
	write(1, "\n", 1);
	ft_putnbr(-456);
	write(1, "\n", 1);
	ft_putnbr(60);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	
}
