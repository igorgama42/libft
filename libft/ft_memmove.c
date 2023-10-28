/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:43 by igama             #+#    #+#             */
/*   Updated: 2023/10/28 14:50:21 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (str1 < str2)
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			s1[n - 1] = s2[n - 1];
			n--;
		}
	}
	return ((void *)s1);
}
