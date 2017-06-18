/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:23:19 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/27 16:11:19 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *ptr;

	if (!(ptr = malloc(size)))
		malloc_error("error in func memalloc", -1);
	while (size-- > 0)
		ptr[size] = '\0';
	return (ptr);
}
