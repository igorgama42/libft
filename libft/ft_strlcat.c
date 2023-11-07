/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:59:57 by igama             #+#    #+#             */
/*   Updated: 2023/11/01 17:20:30 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t  ct1;
  size_t  ct2;

  ct1 = 0;
  ct2 = 0;
  while (dst[ct1] && ct1 < dstsize)
  {
    ct1++;
  }
  if (dstsize > 0)
  {
  	while (src[ct2] && ((ct1 + ct2) < dstsize - 1))
  	{
    	dst[ct1 + ct2] = src[ct2];
    	ct2++;
  	}
  }
  if (ct1 < dstsize)
    dst[ct1 + ct2] = '\0';
	return (ft_strlen(src) + ct1);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[15] = "rrrrrr";
	char	src[] = "lorem ipsum dolor sit amet";

	dest[10] = 'a';
	printf("%zu \n", ft_strlcat(dest,src, 0));
	printf("%s", dest);
}*/
