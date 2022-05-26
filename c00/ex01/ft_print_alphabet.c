/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:34:08 by roferrei          #+#    #+#             */
/*   Updated: 2022/04/12 20:33:31 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_alphabet(void) {
  char c;

  c = 97;
  while (c < 123) {
    ft_putchar(c);
    c++;
  }
}
