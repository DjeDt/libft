#include "libft.h"
#include <stdio.h>
/*
 *	Regle 1 : Chaque noeud est soit rouge soit noir
 *	Regle 2 : La racine est noire
 *	Regle 3 : Toutes les feuilles (NULL) sont noires
 *	Regle 4 : Le chemin de chaque feuille à la racine contient le même nombre de nœuds noirs.
*/

void	insert_case1(t_rbtree *n)
{
	ft_putendl("insert case 1");
	if (n->parent ==  NULL)
		n->color = BLACK;
	else
		insert_case2(n->left);
}

void	insert_case2(t_rbtree *n)
{
	printf("insert case 2\n");
	if (n->parent->color == BLACK)
		return ; /* Parce que l'arbre est valide */
	else
		insert_case3(n);
}

void	insert_case3(t_rbtree *n)
{

	printf("insert case 3");
	t_rbtree *unc;
	t_rbtree *gp;

	unc = uncle(n);
	if ((unc != NULL) && (unc->color == RED))
	{
		n->parent->color = BLACK;
		unc->color = BLACK;
		gp = grandparent(n);
		gp->color = RED;
		insert_case1(gp);
	}
	else
		insert_case4(n);
}

void	insert_case4(t_rbtree *n)
{

	printf("insert case 4");
	t_rbtree *gp;

	gp = grandparent(n);
	if ((n == n->parent->right) && (n->parent == gp->left))
	{
		rotate_left(n->parent, gp);

		/*
		t_rbtree *saved_p = gp->left, *saved_left_n = n->left;
		gp->left=n;
		n->left=saved_p;
		saved_p->right=saved_left_n;
		*/
		n = n->left;
	}
	else if ((n == n->parent->left) && (n->parent == gp->right))
	{
		rotate_right(n->parent, gp);

/*
		t_rbtree *saved_p = gp->right, *saved_right_n = n->right;
		gp->right=n;
		n->right=saved_p;
		saved_p->left=saved_right_n;
*/
		n = n->right;
	}
	insert_case5(n);
}

void	insert_case5(t_rbtree *n)
{

	printf("insert case 5");
	t_rbtree *gp;

	gp = grandparent(n);
	n->parent->color = BLACK;
	gp->color = RED;
	if (n == n->parent->left)
		rotate_right(n->parent, gp);
	else
		rotate_left(n->parent, gp);
}
