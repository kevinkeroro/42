/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:55:53 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/23 18:03:53 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sp;
	size_t			i;

	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)sp[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
