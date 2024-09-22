/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:14:21 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/21 22:40:15 by klimayll         ###   ########.fr       */
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
	i = 0;
	while (i > 0)
	{
		rstr[i] = s[i];
		i++;
	}
	return (rstr);
}
