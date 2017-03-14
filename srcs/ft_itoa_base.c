/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:32:14 by ddinaut           #+#    #+#             */
/*   Updated: 2017/03/14 18:10:24 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	nb_nbr(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa_base(int n, int base)
{
	int				j;
	int				sig;
	char			*ret;
	unsigned int	nbr;

	sig = 0;
	j = nb_nbr(n);
	nbr = n;
	if (n < 0)
	{
		sig = 1;
		nbr = -n;
	}
	if (!(ret = (char*)malloc(sizeof(char) * j + sig + 1)))
		return (NULL);
	ret[j + sig] = '\0';
	while (j-- > 0)
	{
		ret[j + sig] = (nbr % base) + '0';
		nbr /= base;
	}
	if (sig == 1)
		ret[0] = '-';
	return (ret);
}
