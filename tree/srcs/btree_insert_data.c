#include "tree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
						  (void *, void *))
{
	if (*root == NULL)
		*root = btree_create_node(item);
	else if ((*cmpf)(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
	/*
	t_btree *tmp;

	tmp = *root;
	if (tmp == NULL)
		tmp = btree_create_node(item);
	else if ((*cmpf(item, tmp->item)) < 0)
		btree_insert_data(&(tmp)->left, item, cmpf);
	else
		btree_insert_data(&(tmp)->right, item, cmpf);

	else if (tmp)
	else if (tmp->left == NULL)
		tmp->left = btree_create_node(item);
	else if (tmp->right == NULL)
		tmp->right = btree_create_node(item);
	else
		btree_insert_data(&tmp->left, item, cmpf);
	*/
}
