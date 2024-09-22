/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:26:45 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/21 19:55:33 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char *ps1;
	unsigned char *ps2;
	char *dest;
	size_t i;
	size_t j;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	dest = malloc(sizeof(char) * (ft_strlen(ps1) + ft_strlen(ps2)) + 1);
	if (dest == NULL)
		return (NULL);
	while (ps1[i])
	{
		dest[i] = ps1[i];
		i++;
	}
	while (ps2[j])
	{
		dest[i] = ps2[j];
		i++;
		j++;
	}
	return (dest);
}