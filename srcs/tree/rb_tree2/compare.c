#include "rbtree.h"

int		compare_node(void *leftp, void *rightp)
{
	int *left;
	int *right;

	left = (int*)leftp;
	right = (int*)rightp;
	if (left < right)
		return (-1);
	else if (left > right)
		return (1);
	else
		return 0;
}
