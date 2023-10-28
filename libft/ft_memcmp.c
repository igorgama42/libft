/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:56:27 by igama             #+#    #+#             */
/*   Updated: 2023/10/28 16:38:54 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;
	const char	*s1;
	const char	*s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return ((void *)s1 - (void *)s2);
}

#include <stdio.h>
#include <string.h>
int main () {
   char str1[15];
   char str2[16];
   int ret;

   memcpy(str1, "Abcdef", 6);
   memcpy(str2, "abBCDEF", 6);

   ret = memcmp(str1, str2, 5);

   printf("%i \n", ft_memcmp(str1, str2, 2)); 
   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
