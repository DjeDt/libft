#include "tree.h"

//t_tree	*add_tree(t_tree *left, t_tree *right, int node)
t_tree	*add_tree(t_tree *tr, int node)
{
	t_tree *new;

	if (tr == NULL)
	{
		new = new_tree(node);
		new->father = tr;
	}
	else
	{
		new = new_tree(node);
		new->left = tr->left;
		new->right = tr->right;
		new->father = tr->father;
	}
	return (new);
}
