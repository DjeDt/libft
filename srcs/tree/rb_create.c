/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:50:25 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/15 18:55:29 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rb_tree.h"

void	rb_create(t_rb_node **root)
{
	if (!((*root) = (t_rb_node*)malloc(sizeof(t_rb_node))))
		return ;
	else
	{
		(*root)->parent = NULL;
	}
}
