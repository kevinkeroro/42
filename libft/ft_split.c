/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:11:50 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/25 22:03:49 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *s, char c)
{
        int i;
        int words;

        i = 0;
        words = 0;
        while(s[i])
        {
            while(s[i] && s[i] == c)
                i++;
            if(s[i])
                words++;
            while(s[i] && s[i] != c)
                i++;
        }
        return (words);
}

char **ft_split(char const *s, char c)
{
    int wcounter;
    char **res;
    int start;
    int i;
    int j;

    wcounter = count_words(s, c);
    res = (char **)malloc(sizeof(char *) * wcounter + 1);
    if(!res)
        return (NULL);
    i = 0;
    j = 0;
    while(s[i])
    {
        while(s[i] && s[i] == c)
            i++;
        start = i;
        while(s[i] && s[i] != c)
            i++;
        if(start < i)
            res[j++] = ft_substr(s, start, (i - start));
    }
    res[j] = NULL;
    return (res);

    //aaaholaaaqueatal
    //TODO CHECK FREE
}