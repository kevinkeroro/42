/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:38:58 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/23 18:20:19 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	res = (char *)malloc(sizeof(char) * (end - start - 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, &s1[start], (end - start + 1));
	return (res);
}
/*
int	main(void)
{
	int i;
	i = 0;
	char *s = "bbcdholabcdbbbbb";
	char *set = "bcd";
	char *res;
	res = ft_strtrim(s, set);
	while (res[i])
	{
		printf("%c", res[i]);
		i++;
	}
}*/