/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:21:04 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:03:44 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_string(char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}