/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:26:15 by igama             #+#    #+#             */
/*   Updated: 2023/11/01 17:27:30 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
  void  *items;

  items = (void *)malloc(nitems * size);
  if (!items)
    return (NULL);
  else
    ft_bzero(items, nitems);

  return (items);
}
