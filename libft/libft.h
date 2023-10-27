/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:36:56 by igama             #+#    #+#             */
/*   Updated: 2023/10/24 18:04:13 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int arg);
int		ft_isalnum(int character);
int		ft_isascii(int c);
int		ft_isprint(int arg);
size_t	ft_strlen(const char *str);
void	ft_bzero(void	*s, size_t n);
int		ft_atoi(const char	*str);
char	*ft_strchr(const char	*str, int c);
int		ft_strncmp(const char	*str1, const char	*str2, size_t	num);
void	*ft_memcpy(void	*dest, const void	*src, size_t	n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);
int		ft_tolower(int ch);
void	*ft_memset(void *s, int c, size_t n);
int		ft_toupper(int ch);

#endif
