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

t_btree				*btree_create_node(void *item);
void				btree_apply_prefix(t_btree *root, void(*applyf)(void *));
void				btree_apply_infix(t_btree *root, void(*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void(*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

/*
t_tree				*new_tree(int value);
//t_tree				*add_tree(t_tree *left, t_tree *right, int node);
t_tree				*add_tree(t_tree *tr, int node);
int					count_node(t_tree *tr);
void				free_tree(t_tree *tree);
void				print_tree(t_tree *tr);
*/
#endif
