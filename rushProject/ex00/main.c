/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:39:30 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/11 00:40:49 by Ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			result = (str[i] - 48);
		}
		else
		{
			result *= 10;
			result += str[i] - 48;
		}
		i++;
	}
	return (result);
}

void	return_default(void)
{
	rush03(5, 3);
}

void	executer(char *which_func, int *x, int *y)
{
	if (which_func[5] < '0' || which_func[5] > '4')
		return_default();
	if (which_func[5] == '0')
		rush00(*x, *y);
	if (which_func[5] == '1')
		rush01(*x, *y);
	if (which_func[5] == '2')
		rush02(*x, *y);
	if (which_func[5] == '3')
		rush03(*x, *y);
	if (which_func[5] == '4')
		rush04(*x, *y);
}

int	main(int argc, char *argv[])
{
	int		x;
	int		y;
	char	*which_func;

	if (argc != 4)
		return_default();
	which_func = argv[1];
	x = ft_atoi(argv[2]);
	y = ft_atoi(argv[3]);
	if (x < 0 || x > 186 || y < 0 || y > 999)
	{
		return_default();
		return (0);
	}
	executer(which_func, &x, &y);
	return (0);
}
