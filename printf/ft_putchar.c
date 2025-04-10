/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:34:39 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:02:29 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(int c, size_t *counter)
{
    write(1, &c, 1);    
    (*counter)++;
}