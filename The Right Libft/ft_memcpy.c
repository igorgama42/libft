/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:41:59 by igama             #+#    #+#             */
/*   Updated: 2023/10/23 19:22:46 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	size_t			i;
	char			*str1;
	const char		*str2;

	i = 0;
	str1 = dest;
	str2 = src;
	while (str2[i] && i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (0);
}
