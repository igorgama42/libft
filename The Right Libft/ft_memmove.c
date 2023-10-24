/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:43 by igama             #+#    #+#             */
/*   Updated: 2023/10/24 16:24:33 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;
	
	i = 0;
	s1 = str1;
	s2 = str2;
	/*if (s1 >= s2)
	{
		while (i < n && s2[i])
		{
			s1[i] = s2[i];
			i++;
		}
	}*/
	if (s1 < s2)
	{
		while (n > 0 && s2[i])
		{
			s1[i] = s2[i];
			n--;
			i++;
		}
	}
	return(s1);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "Array";
	char	str2[] = "Chaser";
	size_t	i;

	i = 5;

	printf("%s", (char *)ft_memmove(str1, str2, i));
}
