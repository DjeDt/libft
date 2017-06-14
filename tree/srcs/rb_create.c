#include "tree.h"
#include "rb_tree.h"

void	btree_insert_data(t_rb_node **root, void *item, int (*cmpf)
						  (void *, void *))
{
	if (*root == NULL)
		(*root) = btree_create_node(item);
	else if ((*cmpf)(item, (*root)->item) < 0)
	{
		btree_insert_data(&(*root)->left, item, cmpf);
	}
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

t_rb_node	*rb_node_create_node(void *item)
{
	t_btree *new;

	if (!(new = (t_rb_node*)malloc(sizeof(t_btree))))
		return (NULL);
	else
	{
		new->left = NULL;
		new->right = NULL;
		new->root = NULL;
		new->item = item;
	}
	return (new);
}
