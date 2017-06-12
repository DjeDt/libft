/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:47:50 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/12 16:47:51 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

void	btree_apply_prefix(t_btree *root, void(*applyf)(void *))
{
	if (root != NULL)
	{
		applyf(root->item);
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
	}
}
