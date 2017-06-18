/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:13:26 by ddinaut           #+#    #+#             */
/*   Updated: 2017/05/15 16:13:29 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrcpy(char **dst, const char **src)
{
	int count;
	int count2;

	count = 0;
	while (src[count] != NULL)
	{
		if (!(dst[count] = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
			malloc_error("error in func arrcpy", -1);
		count2 = 0;
		while (src[count][count2] != '\0')
		{
			dst[count][count2] = src[count][count2];
			count2++;
		}
		dst[count][count2] = '\0';
		count++;
	}
	src[count] = NULL;
	return (dst);
}
