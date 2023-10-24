/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:21:21 by igama             #+#    #+#             */
/*   Updated: 2023/10/21 21:17:41 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*str1, const char	*str2, size_t	num)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && i < num)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
