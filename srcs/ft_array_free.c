/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:24:33 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/27 18:47:17 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_free(char ***array)
{
	int count;
	int max;

	count = 0;
	max = ft_array_len((const char **)*array);
	if (array != NULL)
	{
		while ((*array)[count] != NULL && count < max)
		{
			ft_memdel((void*)&(*array)[count]);
			count++;
		}
		ft_memdel((void**)&(*array));
	}
}
