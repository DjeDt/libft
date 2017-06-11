#include "tree.h"

void	btree_apply_prefix(t_btree *root, void(*applyf)(void *))
{
	if (root != NULL)
	{
		applyf(root->item);
		btree_apply_prefix();
	}
	/*
	if (root == NULL)
		return ;
	while (root->left != NULL)
	{
		applyf(root->item);
		root = root->left;
	}
	while (root->right != NULL)
	{
		applyf(root->item);
		root = root->right;
	}
	*/
}
