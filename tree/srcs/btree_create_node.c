#include "tree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *new;

	if (!(new = (t_btree*)malloc(sizeof(t_btree))))
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
