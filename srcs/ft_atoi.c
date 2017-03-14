/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:59:37 by ddinaut           #+#    #+#             */
/*   Updated: 2017/03/14 15:14:47 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	delim(char c)
{
	if (c == '\t' || c == '\v' || c == '\n'
	|| c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		nbr;
	int		i;
	char	n;

	nbr = 0;
	n = 0;
	i = 0;
	while (delim(str[i]))
		i++;
	if (str[i] == '-')
		n = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] > 47) && (str[i] < 58))
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
	}
	if (n == 1)
		return (-nbr);
	return (nbr);
}
