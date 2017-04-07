/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 17:02:18 by ddinaut           #+#    #+#             */
/*   Updated: 2017/04/07 17:08:28 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strnlen(const char *str, char c)
{
	int count;

	count = 0;
	while ((str[count] != '\0') && (str[count] != c))
		count++;
	return (count);
}
