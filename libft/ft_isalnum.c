/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:19:26 by igama             #+#    #+#             */
/*   Updated: 2023/10/27 21:00:52 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z')
		|| (character >= '0' && character <= '9'))
		return (1);
	return (0);
}
