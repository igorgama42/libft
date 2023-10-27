/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:40:38 by igama             #+#    #+#             */
/*   Updated: 2023/10/23 17:01:28 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size)
{
	size_t	i;

	i = 0;
	while (src[i] && size - 1 > 0 && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dst[size] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[] = "Destination";
	char	sorc[] = "Sos";
	size_t	s;

	s = 3;
	printf("%zu\n", ft_strlcpy(dest, sorc, s));
	printf("%s", dest);
}*/
