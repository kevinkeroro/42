/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:27:24 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/21 19:54:03 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t slen;
	size_t i;
	char *ps;
	char *dstr;

	ps = (char *)s;
	slen = ft_strlen(s);
	if (start > slen)
		return (0);
	dstr = malloc(len * sizeof(char) + 1);
	while (*ps)
		ps++;
	while (i < len || *ps)
	{
		dstr[i] = *ps;
		ps++;
		i++;
	}
	dstr[i] = '\0';
	return (dstr);
}