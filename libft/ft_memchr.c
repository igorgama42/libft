/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:19:30 by igama             #+#    #+#             */
/*   Updated: 2023/10/28 15:52:56 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*s1;

	i = 0;
	s1 = (char *)str;
	while (s1[i] && i < n)
	{
		if (s1[i] == c)
			return ((void *)s1 + i);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main () 
{
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
