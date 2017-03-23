/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:19:02 by ddinaut           #+#    #+#             */
/*   Updated: 2017/03/23 12:41:22 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_tab(char **tab)
{
	int	count;

	count = 0;
	while (tab[count])
		count++;
	return (count);
}

char		**ft_tabcpy(char **tab)
{
	int		len;
	int		count;
	int		count2;
	char	**ret;

	len = 0;
	count2 = -1;
	count = nb_tab(tab);
	if (!(ret = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	while (++count2 < count)
	{
		len = ft_strlen(tab[count2]);
		if (!(ret[count2] = (char*)malloc(sizeof(char) * len + 1)))
			return (NULL);
		ft_strcpy(ret[count2], tab[count2]);
		ret[count2][len + 1] = '\0';
	}
	ret[count2] = 0;
	return (ret);
}
