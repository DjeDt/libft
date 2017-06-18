/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:38:32 by ddinaut           #+#    #+#             */
/*   Updated: 2016/11/16 19:51:12 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (!(str = ft_memalloc(sizeof(char) * (size + 1))))
		malloc_error("error in func ft_strnew", -1);
	while (i < size)
		str[i++] = '\0';
	return (str);
}
