/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:19:02 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/18 17:05:20 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_array_cpy(char **array)
{
	int		count;
	char	**ret;

	count = 0;
	if (!(ret = (char**)malloc(sizeof(char*) * ft_array_len(array) + 1)))
		return (NULL);
	while (array[count] != NULL)
	{
		ret[count] = ft_strdup(array[count]);
		count++;
	}
	ret[count] = NULL;
	return (ret);
}
