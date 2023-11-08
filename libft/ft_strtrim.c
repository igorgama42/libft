/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:49:11 by igama             #+#    #+#             */
/*   Updated: 2023/11/08 20:53:37 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str1;

	i = 0;
	str1 = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str1)
		return(NULL);
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	i = 0;
	while (*str1 == set[i])
			i++;
			str1++;
	j = (ft_strlen(str1) - 1);
	i = 0;
	while (str1[j] == set[i])
	{
			str1[j] = '\0';
			j--;
		set++;
	}
	str1[j] = '\0';
	return (str1);
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
