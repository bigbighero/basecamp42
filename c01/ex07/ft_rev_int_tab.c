/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:39:22 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/19 02:55:50 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;
	int	swap;

	i = 0;
	rev = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[rev];
		tab[rev] = swap;
		i++;
		rev--;
	}
}
