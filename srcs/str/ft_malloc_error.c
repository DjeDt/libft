/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:32:13 by ddinaut           #+#    #+#             */
/*   Updated: 2017/09/25 16:32:13 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	malloc_error(const char *str, const int ret)
{
	ft_putstr_fd(str, 2);
	ft_putendl_fd(": malloc error: ", 2);
	exit(ret);
}
