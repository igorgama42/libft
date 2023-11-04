/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:34:31 by igama             #+#    #+#             */
/*   Updated: 2023/11/03 21:21:47 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t		j;
	char			*str;

	i = 0;
	j = 0;
	str = (char *) malloc(sizeof(char) * ft_strlen(s));
	if (str[i] == '\0' || len == 0 || start == 0)
		return (0);
	while (s[i])
	{
		if (i == start)
		{
			while (j < len)
			{
				str[j] = s[j];
				j++;
			}
		}
		i++;
		j++;
	}
	return (str);
}
