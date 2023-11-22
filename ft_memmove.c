/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:43 by igama             #+#    #+#             */
/*   Updated: 2023/11/05 19:00:33 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	i = -1;
	s1 = (char *)dest;
	s2 = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (s1 < s2)
	{
		while (++i < n)
			s1[i] = s2[i];
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
