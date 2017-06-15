#include "tree.h"

void		print_tree(t_tree *tree)
{
	if (tree == NULL)
		return ;
	if (tree->father != NULL)
	{
		ft_putnbr(tree->father->value);
		ft_putstr(" -> ");
		ft_putnbr(tree->value);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(tree->value);
		ft_putchar('\n');
	}
	if (tree->left != NULL)
		print_tree(tree->left);
	if (tree->right != NULL)
		print_tree(tree->right);
}
