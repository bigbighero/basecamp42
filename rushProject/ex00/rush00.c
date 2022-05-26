/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:49:37 by Ghenaut-          #+#    #+#             */
/*   Updated: 2022/04/11 01:00:54 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); // import da função para poder realizar print

void	first_line_writer_0(int x)	// Função para formatar a primeira linha de print
{
	int		j;
	char	o;
	char	dash;

	o = 'o';
	dash = '-';
	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(o);
		if (x == 1)
			return ;
		if (j != 0 && j != x - 1)
			ft_putchar(dash);
		if (j == x - 1)
			ft_putchar(o);
		j++;
	}
}

void	middle_line_writer_0(int x)	// função que vai ordenar a impressão das linhas do meio, com caracteres só na lateral
{
	int		j;
	char	pipe;
	char	space;

	pipe = '|';
	space = ' ';
	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar(pipe);
		else
			ft_putchar(space);
		j++;
	}
}

void	last_line_writer_0(int x)	// Função que organiza o print da última linha
{
	int		j;
	char	dash;
	char	o;

	o = 'o';
	dash = '-';
	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(o);
		if (x == 1)
			return ;
		if (j != 0 && j != x - 1)
			ft_putchar(dash);
		if (j == x - 1)
			ft_putchar(o);
		j++;
	}
}

void	rush00(int x, int y)	// Função principal que vai ser utilizada para imprimir na ordem que o exercício precisa, utilizando as funções anteriores.
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			first_line_writer_0(x);
		if (y == 1)
		{
			ft_putchar('\n');
			return ;
		}
		if (i == y - 1)
			last_line_writer_0(x);
		if (i != 0 && i != y - 1)
			middle_line_writer_0(x);
		i++;
		ft_putchar('\n');
	}
}
