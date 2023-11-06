/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:19:30 by igama             #+#    #+#             */
/*   Updated: 2023/11/05 18:58:10 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s1;

	i = 0;
	s1 = (char *)s;
	while (s1[i] && i < n)
	{
		if (s1[i] == c)
			return ((void *)s1 + i);
		i++;
	}
	if (c == '\0')
		return ((void *) s1 + i);
	return (0);
}
