/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:44:01 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/12 20:40:16 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int		check_color(struct s_rb_mode **root)
{
	if (*root != NULL)
	{
		if (*root->parent)
		check_color(*root->left);
		check_color(*root->right);
	}
}

void	rb_insert(struct s_rb_mode **root, void *data, int (*f)(void *, void *))
{
	if (*root == NULL)
	{
		btree_insert_data(root, data, f);
		*root->color = RB_BLACK;
	}
}
