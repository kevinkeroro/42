/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:34:26 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:06:21 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_format_type(char type, va_list args, size_t *counter)
{
    if(type == 'c')
        ft_putchar(va_arg(args, int), counter);
    else if(type == 's')
        ft_putstr(va_arg(args, char*), counter);
    //else if(type == 'p')
    else if(type == 'd' || type == 'i')
        ft_putnbr(va_arg(args, int), counter);
    //else if(type == 'u')
    else if(type == 'x' || type == 'X')
    //else if(type == '%')
        ft_putchar('%', counter);
}

int ft_printf(char const *s, ...){
    va_list args;
    size_t counter;
    va_start(args, s); 

    if(!s)
        return (0);
    counter = 0;
    
    while(*s)
    {
        if(*s == '%')
        {
            s++;
            ft_format_type(*s, args, &counter); //TODO Test if it works *++s
        }
        else
        {
            ft_putchar(*s, &counter);
        }
        s++;
    }
    va_end(args);
    return (counter);
}

int main(void)
{
    char *s = "?, como estas?";
    ft_printf("hola que tal %s %% %c: %i", s, 'x', 1234);
}