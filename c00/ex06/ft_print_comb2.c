/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:07:37 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/13 20:56:02 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putrest(int c)
{
	char	aux;

	aux = c % 10 + '0';
	write(1, &aux, 1);
}

void	ft_putdiv(int c)
{
	char	aux;

	aux = c / 10 + '0';
	write(1, &aux, 1);
}

void	ft_putrestdiv(int c)
{
	ft_putdiv(c);
	ft_putrest(c);
}

void	ft_print_numbers(int a, int b)
{
	if (a != b || b != a)
	{
		ft_putrestdiv(a);
		write(1, " ", 1);
		ft_putrestdiv(b);
		if (a != 98)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a < 99)
	{
		while (b != a && a <= 98)
		{
			b = a + 1;
			while (b <= 99 && a <= 98)
			{
				ft_print_numbers(a, b);
				b++;
			}
			a++;
		}
	}
}
