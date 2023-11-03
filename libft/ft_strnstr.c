/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:08:22 by igama             #+#    #+#             */
/*   Updated: 2023/11/03 18:31:12 by igama            ###   ########.fr       */
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
		return (0);
	else if (little[ct1] == '\0')
		return ((char *) big);
	while (big[ct1] && ct1 < len)
	{
		while (big[ct1 + ct2] == little[ct2] && (ct1 + ct2 < len))
		{
			if (little[ct2 + 1] == '\0')
				return ((char *)big + ct1);
			ct2++;
		}
		ct2 = 0;
		ct1++;
	}
	return (NULL);
}
