/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:12:45 by igama             #+#    #+#             */
/*   Updated: 2023/10/24 18:21:37 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	ct;
	int	minus;
	int	nbr;

	ct = 0;
	minus = 1;
	nbr = 0;
	while (str[ct] == ' ' || (str[ct] >= 9 && str[ct] <= 13))
		ct++;
	if (str[ct] == '-')
	{
		minus *= -1;
		ct++;
	}
	else if (str[ct] == '+')
		ct++;
	while (str[ct] >= '0' && str[ct] <= '9')
	{
		nbr *= 10;
		nbr += str[ct] - '0';
		ct++;
	}
	return (nbr * minus);
}
