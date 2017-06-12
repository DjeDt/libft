/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_lvl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:59:37 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/12 18:35:16 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

void	next_node(t_btree *node, int lvl, int ft, void (*f)(void *item, int level, int first))
{
	(*f)(node->item, lvl, ft);
	if (ft)
		next_node(node->left, ++lvl, 1, f);
	else
		next_node(node->left, ++lvl, 0, f);
	next_node(node->right, ++lvl, 0, f);
}

void	btree_apply_by_lvl(t_btree *root,\
						   void (*f)(void *item, int level, int first))
{
	next_node(rt, 0, 1, f);
}
