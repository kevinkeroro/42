/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:27:24 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/24 22:21:01 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dstr;
	size_t	i;

	i = 0;
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	dstr = malloc(sizeof(char) * (len + 1));
	if (!dstr)
		return (NULL);
	while (i < len)
		dstr[i++] = s[start++];
	dstr[i] = '\0';
	return (dstr);
}
