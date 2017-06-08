/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 12:07:19 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/08 21:47:04 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

char	**ft_arrcpy(char **dst, const char **src);
char	**ft_arrdup(const char **array);
char	**ft_arrldup(const char **arr, size_t max);
char	**ft_arrjoin(char **array, char *add);
char	**ft_arrfjoin(char **array, char **add);
void	ft_arrprint(const char **array);
void	ft_arrfree(char ***array);
size_t	ft_arrlen(const char **array);
char	**ft_split_whitespaces(char *str);

#endif
