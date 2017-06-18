/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 15:58:59 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/06 15:37:50 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	size_t	count;
	char	*ret;

	count = 0;
	if (ft_strlen(src) < n)
		ret = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	else
		ret = malloc(sizeof(char) * n + 1);
	if (ret == NULL)
		malloc_error("error in func ft_strndup", -1);
	while (src[count] != '\0' && count < n)
	{
		ret[count] = src[count];
		count++;
	}
	ret[count] = '\0';
	return (ret);
}
