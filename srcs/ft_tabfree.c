/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:24:33 by ddinaut           #+#    #+#             */
/*   Updated: 2017/03/23 19:26:29 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tabfree(char **tab)
{
	int count;

	count = -1;
	while (tab[++count])
		count++;
	while (tab[count--])
	{
		free(tab[count]);
		tab[count] = NULL;
	}
	return (NULL);
}
