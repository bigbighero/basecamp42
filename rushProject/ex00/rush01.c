/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:40:46 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/10 05:16:33 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line_writer_1(int x)
{
	int		j;
	char	a;
	char	b;
	char	c;

	a = '/';
	b = '*';
	c = '\\';
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

void	middle_line_writer_1(int x)
{
	int		j;
	char	b;
	char	space;

	b = '*';
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

void	last_line_writer_1(int x)
{
	int		j;
	char	c;
	char	b;
	char	a;

	a = '/';
	c = '\\';
	b = '*';
	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(c);
		if (x == 1)
			return ;
		if (j != 0 && j != x - 1)
			ft_putchar(b);
		if (j == x - 1)
			ft_putchar(a);
		j++;
	}
}

void	rush01(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			first_line_writer_1(x);
		if (y == 1)
		{
			ft_putchar('\n');
			return ;
		}
		if (i == y - 1)
			last_line_writer_1(x);
		if (i != 0 && i != y - 1)
			middle_line_writer_1(x);
		i++;
		ft_putchar('\n');
	}
}
