/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:27:24 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/27 17:01:15 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dstr;
	size_t			i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_calloc(1, sizeof(char)));
	if (len > slen - start)
		len = slen - start;
	dstr = malloc(sizeof(char) * (len + 1));
	if (!dstr)
		return (NULL);
	while (i < len)
		dstr[i++] = s[start++];
	dstr[i] = '\0';
	return (dstr);
}
