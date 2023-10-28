/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:22:30 by igama             #+#    #+#             */
/*   Updated: 2023/10/28 14:51:32 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t	n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (str[i] && n > 0)
	{
		str[n - 1] = c;
		n--;
		i++;
	}
	return (s);
}
