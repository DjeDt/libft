/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:09:36 by ddinaut           #+#    #+#             */
/*   Updated: 2016/11/16 19:47:09 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ret;
	char	*str;

	ret = s1;
	str = (char*)s2;
	while (*ret != '\0')
		ret++;
	while (*str != '\0')
	{
		*ret = *str;
		ret++;
		str++;
	}
	*ret = '\0';
	return (s1);
}
