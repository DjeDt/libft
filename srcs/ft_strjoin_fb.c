/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_fb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:43:28 by ddinaut           #+#    #+#             */
/*   Updated: 2017/05/11 19:12:51 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ret(char *s1, char *s2)
{
	if (s1 == NULL)
		return (ft_strdup(s2));
	else
		return (ft_strdup(s1));
}

char		*ft_strjoin_fb(char *s1, char *s2)
{
	char	*join;

	if (s1 == NULL || s2 == NULL)
		return (ft_ret(s1, s2));
	join = ft_strjoin(s1, s2);
	ft_memdel((void*)&s1);
	ft_memdel((void*)&s2);
	return (join);
}
