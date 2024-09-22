/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:33:39 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/21 19:55:28 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	ldst = ft_strlen((const char *)dst);
	if (size <= ldst)
		return (size + ldst);
	while (src[ldst + i] || size - 1 > i)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ldst + lsrc);
}
