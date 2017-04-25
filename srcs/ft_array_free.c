/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:24:33 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/25 16:49:43 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_free(char ***array)
{
	int count;

	count = 0;
	while ((*array)[count] != NULL)
	{
		free((*array)[count]);
		count++;
	}
	free(*array);
	*array = NULL;
}
