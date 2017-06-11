#include "tree.h"

int		count_node(t_tree *tr)
{
	int	count;

	if (tr == NULL)
		return (0);
	count = 0;
	return (count_node(tr->left) + count_node(tr->right) + (++count));
}
