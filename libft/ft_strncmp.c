/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:45:03 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/23 19:57:16 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s;

	s = 0;
	while (s < n && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		s++;
	}
	if (s == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	printf("%i", ft_strncmp("ABC", "AB", 3));
}
*/