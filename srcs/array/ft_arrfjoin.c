/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrfay_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:21:56 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/10 15:23:40 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrfjoin(char **base, char **add)
{
	int		count;
	int		count2;
	char	**ret;

	if (!(ret = (char**)malloc(sizeof(char*) * \
							(ft_arrlen((const char **)base) + \
							ft_arrlen((const char **)add) + 1))))
		malloc_error("error in ft_arrfjoin", -1);
	count = 0;
	count2 = 0;
	while (base[count] != NULL)
	{
		ret[count] = ft_strdup(base[count]);
		count++;
	}
	while (add[count2] != NULL)
	{
		ret[count] = ft_strdup(add[count2]);
		count++;
		count2++;
	}
	ret[count] = NULL;
	ft_arrfree(&base);
	return (ret);
}