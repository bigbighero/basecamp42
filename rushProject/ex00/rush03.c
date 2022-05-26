/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:40:46 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/10 04:54:18 by Ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line_writer_3(int x)
{
	int		j;
	char	a;
	char	b;
	char	c;

	a = 'A';
	b = 'B';
	c = 'C';
	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(a);
		if (x == 1)
			return ;
		if (j != 0 && j != x - 1)
			ft_putchar(b);
		if (j == x - 1)
			ft_putchar(c);
		j++;
	}
}

void	middle_line_writer_3(int x)
{
	int		j;
	char	b;
	char	space;

	b = 'B';
	space = ' ';
	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar(b);
		else
			ft_putchar(space);
		j++;
	}
}

void	last_line_writer_3(int x)
{
	int		j;
	char	c;
	char	b;
	char	a;

	a = 'A';
	c = 'C';
	b = 'B';
	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(a);
		if (x == 1)
			return ;
		if (j != 0 && j != x - 1)
			ft_putchar(b);
		if (j == x - 1)
			ft_putchar(c);
		j++;
	}
}

void	rush03(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			first_line_writer_3(x);
		if (y == 1)
		{
			ft_putchar('\n');
			return ;
		}
		if (i == y - 1)
			last_line_writer_3(x);
		if (i != 0 && i != y - 1)
			middle_line_writer_3(x);
		i++;
		ft_putchar('\n');
	}
}
