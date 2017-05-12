/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:21:56 by ddinaut           #+#    #+#             */
/*   Updated: 2017/05/11 19:15:20 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrjoin(char **base, char *add)
{
	int		count;
	char	**ret;

	if (!(ret = (char**)malloc(sizeof(char*) * \
							   ft_arrlen((const char **)base) + 1)))
		return (NULL);
	count = -1;
	while (base[++count] != NULL)
		ret[count] = base[count];
	ret[count++] = ft_strdup(add);
	ret[count] = NULL;
	return (ret);
}
