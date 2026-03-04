/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhedr <nakhedr@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:01:39 by nakhedr           #+#    #+#             */
/*   Updated: 2026/03/04 17:19:30 by nakhedr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);

int	main(void)
{
	ft_putchar('t');
	ft_putchar('W');
	ft_putchar('0');
	ft_putchar('\n');
	ft_print_alphabet();
	ft_putchar('\n');
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	ft_print_numbers();
	ft_putchar('\n');
	ft_is_negative(45);
	ft_is_negative(0);
	ft_is_negative(-445);
	ft_putchar('\n');
	return (0);
}
