/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:31:17 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 16:43:49 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(const int i);
int		ft_isalpha(const int i);
int		ft_isascii(const int i);
int		ft_isdigit(const int i);
int		ft_isprint(const int i);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int ch);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t n, size_t size);

#endif
