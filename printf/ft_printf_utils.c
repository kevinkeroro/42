/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:55:31 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:04:30 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format_type(char type, va_list args)
{
    if(type == 'c')
        return((va_arg(args, int)));
    else if(type == 's')
        return(ft_print_string(va_arg(args, char*)));
    else if(type == 'p')
        return(1);
    else if(type == 'd' || type == 'i')
        return(ft_print_number(va_arg(args, int)));
    else if(type == 'u')
        return(printf("U"));
    else if(type == 'x' || type == 'X')
        return(printf("X"));
    else if(type == '%')
        return(ft_print_char('%'));
}