/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:42:26 by ddinaut           #+#    #+#             */
/*   Updated: 2016/11/16 21:05:44 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		delimiteurs(char c, char s)
{
	if (c == s)
		return (1);
	return (0);
}

static	int		ft_len(const char *str, char c)
{
	int i;

	i = 0;
	while (!(delimiteurs(str[i], c)) && str[i])
		i++;
	return (i);
}

static	int		nbr_mots(const char *str, char s)
{
	int i;
	int nombremot;

	i = 0;
	nombremot = 0;
	while (str[i])
	{
		while (str[i] == s)
			i++;
		if (str[i])
		{
			while ((str[i] != s) && str[i])
				i++;
			nombremot++;
		}
	}
	return (nombremot);
}

static	char	*ft_copie(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen((char*)src);
	while (i < len)
	{
		if (i > j)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		taille;
	char	**ret;

	i = 0;
	j = 0;
	taille = 0;
	if (s == NULL)
		return (NULL);
	if (!(ret = (char**)malloc(sizeof(char*) * ((nbr_mots(s, c) + 1)))))
		return (NULL);
	while (j < (nbr_mots(s, c)))
	{
		while (delimiteurs(s[i], c))
			i++;
		taille = ft_len((char*)&s[i], c);
		ret[j] = (char*)malloc(sizeof(char) * (taille + 1));
		ret[j] = ft_copie(ret[j], (char*)s + i, taille);
		i += taille;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
