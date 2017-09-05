#include "rbtree.h"

void print_tree(rbtree t)
{
    print_tree_helper(t->root, 0);
    puts("");
}

void print_tree_helper(rbtree_node n, int step)
{
    int i;

	if (n == NULL)
	{
        fputs("<empty tree>", stdout);
        return;
    }
    if (n->right != NULL)
        print_tree_helper(n->right, step + stepspace);
    for (i = 0; i < step; i++)
        fputs(" ", stdout);
	if (n->color == BLACK)
        printf("%s\n", n->key);
    else
        printf("<%s>\n", n->key);
    if (n->left != NULL)
        print_tree_helper(n->left, step + stepspace);
}
