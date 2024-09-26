/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:11:50 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/26 20:04:57 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

void	free_words(char **words, int num_words)
{
	int	i;

	i = 0;
	while (i < num_words)
		free(words[i++]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		i;
	int		j;

	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			res[j++] = ft_substr(s, start, (i - start));
		if (!res[j - 1])
			return (free_words(res, count_words(s, c)), NULL);
	}
	res[j] = NULL;
	return (res);
}
