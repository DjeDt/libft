/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:44:01 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/13 20:08:26 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
#include "rb_tree.h"


void	rotate_left(t_rb_node *node, t_rb_node *gp)
{
	t_rb_node *save_gp_l;
	t_rb_node *save_node_l;

	save_gp_l = gp->left;
	save_node_l = node->left;

	gp->left = node;
	node->left = save_gp_l;
	save_gp_l->right = save_node_l;
}

void	rotate_right(t_rb_node *node, t_rb_node *gp)
{
	t_rb_node *save_gp_r;
	t_rb_node *save_node_r;

	save_gp_r = gp->right;
	save_node_r = node->right;

	gp->right = node;
	node->right = save_gp_r;
	save_gp_r->left = save_node_r;
}

t_rb_node	*grandparent(t_rb_node *node)
{
	if (node != NULL && node->parent != NULL)
		return (node->parent->parent);
	else
		return (NULL);
}

t_rb_node	*uncle(t_rb_node *node)
{
	t_rb_node *gp;

	if ((gp = grandparent(node)) == NULL)
		return (NULL);
	if (node->parent == gp->left)
		return (gp->right);
	else
		return (gp->left);
}


void	rb_insert(struct s_rb_node **root, void *data, int (*f)(void *, void *))
{
	btree_insert_data((t_btree**)root, data, f);
	insert_case1((*root));
}
