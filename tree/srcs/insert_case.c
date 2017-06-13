/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 20:01:20 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/13 20:02:57 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rb_tree.h"

void	insert_case1(t_rb_node *node)
{
	if (node->parent == NULL)
		node->color = RB_BLACK;
	else
		insert_case2(node);
}

void	insert_case2(t_rb_node *node)
{
	if (node->parent->color == RB_BLACK)
		return ;
	else
		insert_case3(node);
}

void	insert_case3(t_rb_node *node)
{
	t_rb_node *unc;
	t_rb_node *gp;

	unc = uncle(node);
	if ((unc != NULL) && (unc->color == RB_BLACK))
	{
		unc->parent->color = RB_BLACK;
		unc->color = RB_BLACK;
		gp = grandparent(node);
		gp->color = RB_RED;
		insert_case1(gp);
	}
	else
		insert_case4(node);
}

void	insert_case4(t_rb_node *node)
{
	t_rb_node *gp;

	gp = grandparent(node);
	if ((node == node->parent->right) && (node->parent == gp->left))
	{
		rotate_left(node->parent, gp);
		node = node->left;
	}
	else if ((node == node->parent->left) && (node->parent == gp->right))
	{
		rotate_right(node->parent, gp);
		node = node->right;
	}
	insert_case5(node);
}

void	insert_case5(t_rb_node *node)
{
	t_rb_node *gp;

	gp = grandparent(node);
	node->parent->color = RB_BLACK;
	gp->color = RB_RED;
	if (node == node->parent->left)
		rotate_left(gp->parent, gp);
	else
		rotate_right(gp->parent, gp);

}
