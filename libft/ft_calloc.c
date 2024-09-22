/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:48:51 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/21 22:38:26 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	msize;
	void	*preturn ;

	preturn = malloc(nmemb * size);
	if (preturn == NULL)
		return (NULL);
	ft_bzero(preturn, msize);
	return (preturn);
}
