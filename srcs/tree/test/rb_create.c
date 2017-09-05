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
#include <assert.h>


t_rb_node	*new_node(void *data , int node_color, t_rb_node *left, t_rb_node *right)
{
	t_rb_node *new;

	if (!(new = (t_rb_node *)malloc(sizeof(t_rb_node))))
		return (NULL);
	new->data = data;
	new->color = node_color;
	new->left = left;
	new->right = right;
	left != NULL ? left->parent = new : NULL;
	right != NULL ? right->parent = new : NULL;
	new->parent = NULL;
	return (new);
}

t_rb_node	*rb_create()
{

	t_rb_node *new;

	if (!(new = (t_rb_node*)malloc(sizeof(t_rb_node))))
		return (NULL);
	new->parent = NULL;
	new->color = RB_RED;
	return (new);
}
