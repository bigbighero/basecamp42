/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:59:27 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/14 00:52:43 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void printInt(ft_atoi)
{
	int i;
	
	i = 0;
	while (i )
}

void	ft_putnbr(int nb)
{
	ft_atoi(nb);
}
