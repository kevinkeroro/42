/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:16:17 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/28 20:56:14 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
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

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		res[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

/*int	main(void)
{
	int i;
	char *res;
	res = ft_itoa(-9);
	i = 0;
	while (res[i])
	{
		printf("%c", res[i]);
		i++;
	}
}*/