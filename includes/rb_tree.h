/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_tree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:42:01 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/15 15:26:43 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  RB_TREE_H
# define RB_TREE_H

#include "libft.h"

enum					e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct			s_rb_node
{
	struct	s_rb_node	*parent;
	struct	s_rb_node	*left;
	struct	s_rb_node	*right;
	void				*data;
	enum	e_rb_color	color;
}						t_rb_node;

void					rb_insert(t_rb_node **root, void *data, int (*f)(void *, void *));
void					insert_case1(t_rb_node *node);
void					insert_case2(t_rb_node *node);
void					insert_case3(t_rb_node *node);
void					insert_case4(t_rb_node *node);
void					insert_case5(t_rb_node *node);

void					rotate_left(t_rb_node *node, t_rb_node *save_p, t_rb_node *save_n);
void					rotate_right(t_rb_node *node, t_rb_node *save_p, t_rb_node *save_n);

t_rb_node				*grandparent(t_rb_node *node);
t_rb_node				*uncle(t_rb_node *node);

#endif
