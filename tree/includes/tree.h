/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:09:30 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/13 16:44:11 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

# include "libft.h"

typedef struct		s_btree
{
	struct s_btree	*root;
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);
void				btree_apply_prefix(t_btree *root, void(*applyf)(void *));
void				btree_apply_infix(t_btree *root, void(*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void(*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void				*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
void				btree_apply_by_lvl(t_btree *root, void (*applyf)(void *item, int cur_lvl, int is_first));
int					btree_lvl_count(t_btree *root);
int					count_node(t_btree *tr);

#endif
