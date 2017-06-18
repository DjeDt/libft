/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 03:03:55 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/08 15:14:22 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = NULL;
	if (s != NULL)
	{
		if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
			malloc_error("error in func ft_strsub", -1);
		while (i < len)
		{
			ret[i] = s[start];
			i++;
			start++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
