/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:16:17 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/26 20:44:05 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = count_digits(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	while (len > 0)
	{
		if (n < 0)
		{
			res[0] = '-';
			n = -n;
		}
		else
		{
			res[len--] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (res);
}

/*int	main(void)
{
	int	i;
	char *res;
	res = ft_itoa(0);
	i = 0;
	while(res[i])
	{
		printf("%c", res[i++]);
	}
}*/