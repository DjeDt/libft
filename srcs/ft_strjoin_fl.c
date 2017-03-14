/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 03:17:37 by ddinaut           #+#    #+#             */
/*   Updated: 2017/02/24 20:46:06 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_joinnullreturn(char const *s1, char const *s2)
{
	if (s1 == NULL)
		return (ft_strdup(s2));
	else
		return (ft_strdup(s1));
}

char		*ft_strjoin_fl(char const *s1, char const *s2)
{
	char			*join;
	unsigned int	i;
	unsigned int	a;

	if (s1 == NULL || s2 == NULL)
		return (ft_joinnullreturn(s1, s2));
	a = ft_strlen(s1);
	join = (char*)malloc(sizeof(char) * (a + ft_strlen(s2) + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	free((char*)s1);
	while (s2[i] != '\0')
	{
		join[a + i] = s2[i];
		i++;
	}
	join[a + i] = '\0';
	return (join);
}
