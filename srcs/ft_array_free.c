/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:24:33 by ddinaut           #+#    #+#             */
/*   Updated: 2017/03/24 12:28:12 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_free(char ***tab)
{
	size_t	count;
	char	**tmp;

	count = -1;
	tmp = (*tab);
	if (tab != NULL)
	{
		while (tmp[++count])
			free(tmp[count]);
		free(tmp);
		tmp = NULL;
	}
}
