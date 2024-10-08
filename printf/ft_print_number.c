/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:27:31 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:04:23 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_print_number(int number)
{
    long	ln;
	int	i;

	i = 0;
	ln = number;
	if (ln < 0)
	{
		ft_print_char('-');
		ln = -ln;
	}
	if (ln >= 10)
		ft_print_number(ln / 10);
	i += ft_print_char((ln % 10) + '0');

	return (i);
}