/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:57:20 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/21 19:56:58 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	pd = (unsigned char)dest;
	ps = (unsigned char)src;
	if (src == dest || n == 0)
		return (dest);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			ps[n] = pd[n];
		}
	}
	else
		ft_memcpy(pd, ps, n);
	return (dest);
}
