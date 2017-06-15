#include "tree.h"

void	free_tree(t_tree *tree)
{
	if (tree == NULL)
		return ;
	free(tree);
	free_tree(tree->left);
	free_tree(tree->right);
}
