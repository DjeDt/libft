/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:52:11 by ddinaut           #+#    #+#             */
/*   Updated: 2017/03/23 12:57:18 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabprint(char **tab)
{
	int count;

	count = -1;
	if (!tab)
		return ;
	while (tab[++count])
		ft_putendl(tab[count]);
}
