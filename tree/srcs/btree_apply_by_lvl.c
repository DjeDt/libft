/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_lvl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:59:37 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/13 15:26:32 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
/*
static void	next_node(t_btree *node, int lvl, int ft, \
					  void (*f)(void *item, int level, int first))
{
	(*f)(node->item, lvl, ft);
	if (ft)
		next_node(node->left, ++lvl, 1, f);
	else
		next_node(node->left, ++lvl, 0, f);
	if (node->right)
		next_node(node->right, ++lvl, 0, f);
}
*/
void	btree_apply_by_lvl(t_btree *root,\
						   void (*f)(void *item, int level, int first))
{
	(void)root;
	(void)f;
//	if (root)
//	next_node(root, 0, 1, f);
}
