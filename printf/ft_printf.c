/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:34:26 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/29 22:38:32 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *s, ...){
    va_list args;
    int i;
    
    i = 0;
    va_start(args, s);
    while(s[i])
    {
        if(s[i] == '%')
            ft_format_type(s[++i], args);
        else
            write(1, &s[i], 1);
        i++;
    }
    va_end(args);
    return (i);
}

int main(void)
{
    char *s = "?, como estas?";
    ft_printf("hola que tal %s %% %c: %i", s, 'x', 1234);
}