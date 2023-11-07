/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:24:48 by igama             #+#    #+#             */
/*   Updated: 2023/11/07 16:57:56 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strjoin(char const *s1, char const *s2)
{
  char  *new_str;

  new_str = (char *) malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
  if (!new_str)
    return (0);
  while (s1)
  {
    *new_str = *s1;
    new_str++;
    s1++;
  }
  while (s2)
  {
    *new_str = *s2;
    new_str++;
    s2++;
  }
  *new_str = '\0';
  return (new_str);
}
