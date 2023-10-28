/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:41:59 by igama             #+#    #+#             */
/*   Updated: 2023/10/28 14:51:26 by igama            ###   ########.fr       */
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
	if (!str1 || !str2)
		return (NULL);
	while (i < n)
	{
		if (!str1)
			return (NULL);
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
