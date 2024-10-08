/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:14:21 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/24 21:06:26 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	size_t	i;
	char	*rstr;

	slen = ft_strlen(s);
	rstr = (char *)malloc(sizeof(char) * slen + 1);
	if (!rstr)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		rstr[i] = s[i];
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}
