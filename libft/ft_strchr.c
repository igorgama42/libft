/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:55:48 by igama             #+#    #+#             */
/*   Updated: 2023/10/25 16:27:44 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int c)
{
	if (!str)
		return NULL;
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char*) str);
}
