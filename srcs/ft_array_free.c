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

void	ft_array_free(char ***array)
{
	int count;

	count = 0;
	while ((*array)[count])
	{
		free((*array)[count]);
		count++;
	}
	free((*array)[count]);
	free(*array);
	*array = NULL;
}
