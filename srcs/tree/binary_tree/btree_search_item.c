#include "tree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	void	*found;

	if (root && data_ref)
	{
		if ((found = btree_search_item(root->left, data_ref, cmpf)))
			return (found);
		if (cmpf(root->item, data_ref) == 0)
			return (root);
		if ((found = btree_search_item(root->right, data_ref, cmpf)))
			return (found);
	}
	return (NULL);
}
