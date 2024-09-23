/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:57:20 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/23 19:26:24 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (src == dest || n == 0)
		return (dest);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			pd[n] = ps[n];
		}
	}
	else
		ft_memcpy(pd, ps, n);
	return (dest);
}

/*
int main(void)
{
	char dest[] = "1234567890";
	const char	*src = "abcd";
	ft_memmove(dest, src, 3);

	int i = 0;
	while(dest[i])
	{
		printf("%c", dest[i++]);
	}
}*/