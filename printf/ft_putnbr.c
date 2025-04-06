/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:27:31 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:04:23 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr(int number, size_t *counter)
{
    long	ln;

	ln = number;
	if (ln < 0)
	{
		ft_putchar('-', counter);
		ln = -ln;
	}
	if (ln >= 10)
		ft_putnbr(ln / 10, counter);
	ft_putchar((ln % 10) + '0', counter);

}