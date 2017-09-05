#include "rbtree.h"

t_rbtree *grandparent(t_rbtree *n)
{
	if ((n != NULL) && (n->parent != NULL))
		return (n->parent->parent);
	return (NULL);
}

t_rbtree	*uncle(t_rbtree *n)
{
	t_rbtree *g;

	if ((g = grandparent(n)) == NULL)
		return (NULL);
	if (n->parent == g->left)
		return (g->right);
	else
		return (g->left);
}

t_rbtree	*sibling(t_rbtree *n)
{
	if ((n == NULL) || (n->parent == NULL))
		return (NULL);
	if (n == n->parent->left)
		return (n->parent->right);
	else
		return (n->parent->left);
}
