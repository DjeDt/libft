/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:24:33 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/18 20:17:04 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_free(char ***tab)
{
	size_t	count;
	size_t	count2;
	char	**tmp;

	count = 0;
	count2 = 0;
	tmp = (*tab);
	while (tmp[count2] != NULL)
		count2++;
	if (tab != NULL)
	{
		while (count < count2)
		{
			free(tmp[count]);
			count++;
		}
		free(tmp);
	}
}
