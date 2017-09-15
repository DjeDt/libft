/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:19:02 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/27 16:43:05 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_arrdup(char **array)
{
	int		count;
	char	**ret;

	count = 0;
	if (!(ret = (char**)malloc(sizeof(char*) * (ft_arrlen(array) + 1))))
		malloc_error("error in func arrdup", -1);
	while (array[count] != NULL)
	{
		ret[count] = ft_strdup(array[count]);
		count++;
	}
	ret[count] = NULL;
	return (ret);
}
