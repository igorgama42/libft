/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:24:48 by igama             #+#    #+#             */
/*   Updated: 2023/11/08 18:47:26 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*new_str;
	size_t	sum;

	i = 0;
	sum = ((ft_strlen(s1)) + (ft_strlen(s2) + 1));
	new_str = (char *) malloc(sizeof(char) * (sum));
	if (!new_str)
		return (0);
	while (*s1 && *new_str)
	{
		new_str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 && *new_str)
	{
		new_str[i] = *s2;
		i++;
		s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
