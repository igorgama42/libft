/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:49:11 by igama             #+#    #+#             */
/*   Updated: 2023/11/08 23:35:00 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str1;

	i = ft_strlen(s1);;
	if (!s1)
		return (0);
	str1 = (char *) malloc(sizeof(char) * ((i) + 1));
	if (!str1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (i && (ft_strchr(set, s1[i])))
	{
		i--;
	}
	return (ft_substr(s1, 0, i + 1));
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "-- Teste - de - Strtrim ---";
	char	s2[] = "-";
	char	*s3;

	s3 = ft_strtrim(s1, s2);
	printf("%s", s3);

}*/
