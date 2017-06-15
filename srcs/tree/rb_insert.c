/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:44:01 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/15 18:19:59 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
#include "rb_tree.h"
#include <stdio.h>

void	rotate_left(t_rb_node *node, t_rb_node *save_p, t_rb_node *save_n)
{
	node->left = node;
	node->left = save_p;
	save_p->right = save_n;
}

void	rotate_right(t_rb_node *node, t_rb_node *save_p, t_rb_node *save_n)
{
	node->right = node;
	node->right =  save_p;
	save_p->left = save_n;
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

t_rb_node	*rb_create(void *data)
{
	t_rb_node *new;

	if (!(new = (t_rb_node*)malloc(sizeof(t_rb_node))))
		return (NULL);
	else
	{
		new->left = NULL;
		new->right = NULL;
		new->parent = NULL;
		new->data = data;
		new->color = RB_BLACK;
	}
	return (new);
}

void	rb_insert(struct s_rb_node **root, void *data, int (*f)(void *, void *))
{
	if (data == NULL)
		return ;
	if ((*root) == NULL)
	{
		(*root) = rb_create(data);
		insert_case1((*root));
	}
	else if ((*f)(data, (*root)->data) < 0)
	{
		rb_insert(&(*root)->left, data, f);
		(*root)->left->parent = (*root);
		insert_case1((*root));
	}
	else
	{
		rb_insert(&(*root)->right, data, f);
		(*root)->right->parent = (*root);
		insert_case1((*root));
	}
	insert_case1((*root));
}
