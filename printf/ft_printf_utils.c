/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:55:31 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/29 22:37:25 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_format_type(char type, va_list args)
{
    if(type == 'c')
        ft_print_char(va_arg(args, int));
    else if(type == 's')
        ft_print_string(va_arg(args, char*));
    else if(type == 'p')
        printf("P");
    else if(type == 'd' || type == 'i')
        ft_print_number(va_arg(args, int));
    else if(type == 'u')
        printf("U");
    else if(type == 'x' || type == 'X')
        printf("X");
    else if(type == '%')
        ft_print_char('%');
}