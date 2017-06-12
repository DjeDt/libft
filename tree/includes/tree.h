/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:09:30 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/12 18:49:20 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

# include "libft.h"

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	struct s_btree	*root;
	void			*item;
}					t_btree;

enum				e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct		s_rb_node
{
	struct	s_rb_node	*parent;
	struct	s_rb_node	*left;
	struct	s_rb_node	*right;
	void				*data;
	enum	e_rb_color	color;
}					t_rb_node;

t_btree				*btree_create_node(void *item);
void				btree_apply_prefix(t_btree *root, void(*applyf)(void *));
void				btree_apply_infix(t_btree *root, void(*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void(*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void				*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
void				btree_apply_by_lvl(t_btree *root, void (*applyf)(void *item, int cur_lvl, int is_first));
int					btree_lvl_count(t_btree *root);
int					count_node(t_btree *tr);

void				rb_insert(struct s_rb_mode **root, void *data, inf (*f)(void *, void *));

#endif
