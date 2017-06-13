#include "tree.h"

t_tree	*new_tree(int val)
{
	t_tree *new;

	if (!(new = (t_tree*)malloc(sizeof(t_tree))))
		return (NULL);
	new->value = val;
	new->left = NULL;
	new->right = NULL;
	new->father = NULL;
	return (new);
}
