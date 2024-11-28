/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:20:47 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/28 12:55:27 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_LIBFT_H
# define FT_LIBFT_H
#include <stdlib.h>
#include <stdio.h>

void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int str);
int					ft_isascii(int c);
int					ft_isdigit(int str);
int					ft_isprint(int str);
void				*ft_memcpy(void *dest, const void *src,	size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *ptr, int value, size_t num);
size_t				ft_strlen(const char *str);
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
const char			*ft_strnstr(const char *big, const char *little,size_t len);
int					ft_atoi(const char *nptr);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);

#endif
