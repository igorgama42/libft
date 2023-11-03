/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:36:56 by igama             #+#    #+#             */
/*   Updated: 2023/11/03 14:36:44 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int arg);
int		ft_isalnum(int character);
int		ft_isascii(int c);
int		ft_isprint(int arg);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char	*str2, size_t num);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
size_t	ft_strlcpy(char	*dst, const char *src, size_t size);
int		ft_tolower(int ch);
void	*ft_memset(void *s, int c, size_t n);
int		ft_toupper(int ch);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *big, const char *little, size_t len);

#endif
