/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:29:32 by ddinaut           #+#    #+#             */
/*   Updated: 2017/12/18 19:52:26 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_len(unsigned int val, int base)
{
	int len;

	len = 1;
	while (val /= base)
		len++;
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	int			len;
	int			neg;
	unsigned int val;
	char		*str = "0123456789ABCDEF";
	char		*ret;

	neg = 0;
	len = 0;
	val = 0;
	ret = NULL;
	if (base < 2 && base > 16)
		return (NULL);
	if ((base == 10) && (value < 0))
	{
		val = value * (-1);
		neg = 1;
	}
	else if (value < 0)
		val = value * (-1);
	else
		val = value;
	len = get_len(val, base) + neg;
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[len] = '\0';
	while (len--)
	{
		ret[len] = str[val % base];
		val /= base;
	}
	if (neg == 1)
		ret[0] = '-';
	return (ret);
}
