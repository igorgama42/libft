/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:10:29 by igama             #+#    #+#             */
/*   Updated: 2023/11/11 05:39:03 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	temp_ch;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	temp_ch = c;
	while (len > 0 && *(s + len) != temp_ch)
		len--;
	if (*(s + len) == temp_ch)
		return ((char *)s + len);
	return (0);
}
