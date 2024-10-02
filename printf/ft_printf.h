/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:27:45 by klimayll          #+#    #+#             */
/*   Updated: 2024/10/02 19:04:03 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(char const *s, ...);
int ft_format_type(char type, va_list args);
int    ft_print_char(char c);
int    ft_print_string(char *s);
int    ft_print_number(int number);
#endif