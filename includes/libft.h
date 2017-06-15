/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:10:22 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/15 14:49:09 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# include "array.h"
# include "print.h"
# include "list.h"
# include "utils.h"
# include "mem.h"
# include "tree.h"
# include "rb_tree.h"

size_t		ft_strlen(const char *str);
size_t		ft_strnlen(const char *str, char c);
int			ft_count_char(const char *str, const char c);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strdup(const char *src);
char		*ft_strndup(const char *src, size_t n);
void		ft_strreplace(char *old, char *new);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strstr(const char *big, const char *little);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strfsub(char *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_fl(char *s1, const char *s2);
char		*ft_strjoin_fr(char const *s1, char const *s2);
char		*ft_strjoin_fb(char *s1, char *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
void		ft_bzero(void *s, size_t n);
char		*ft_itoa(int n);
char		*ft_itoa_base(int value, int base);
int			ft_atoi(const char *str);

#endif
