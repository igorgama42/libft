/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:08:22 by igama             #+#    #+#             */
/*   Updated: 2023/11/05 15:53:05 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ct1;
	size_t	ct2;

	ct1 = 0;
	ct2 = 0;
	if (len == 0)
		return ((char *)big);
	else if (little[ct1] == '\0')
		return ((char *)big);
	while (big[ct1] && ct1 < len)
	{
		ct2 = 0;
		while (big[ct1 + ct2] == little[ct2] && (ct1 + ct2 < len))
		{
			if (big[ct1 + ct2] == '\0')
				return ((char *)big);
			ct2++;
		}
		if (little [ct2] == '\0')
			return ((char *) big + ct1);
		ct1++;
	}
	return (NULL);
}
