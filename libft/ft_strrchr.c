/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:20:00 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/23 19:54:04 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	aux;

	i = 0;
	aux = -1;
	while (s[i])
	{
		if (s[i] == c)
			aux = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (aux == -1)
		return (NULL);
	else
		return ((char *)s + aux);
}
/*
int	main(void)
{
	char	s[] = "abcdefgab";

	printf("%s", ft_strrchr(s, 'a'));
}
*/