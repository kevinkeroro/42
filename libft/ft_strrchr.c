/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:20:00 by klimayll          #+#    #+#             */
/*   Updated: 2024/09/22 19:27:52 by klimayll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	aux;

	i = 0;
	aux = -1;
	while (s[i])
	{
		if (s[i] == c)
			aux = i + 1;
		i++;
	}
	if (aux == -1)
		return ((char *)s + i);
	else
		return ((char *)s + aux);
}
/*
int	main(void)
{
	char	s[] = "abcdefgab";

	printf("%s", ft_strrchr(s, 'a'));
}
*/