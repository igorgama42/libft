/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:43:57 by igama             #+#    #+#             */
/*   Updated: 2023/11/09 20:10:34 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	n_digits;

	n_digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		n_digits++;
	}
	while (n > 0)
	{
		n /= 10;
		n_digits++;
	}
	return (n_digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = digits(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[size] = '\0';
	while (n > 0)
	{
		str[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (str);
}
