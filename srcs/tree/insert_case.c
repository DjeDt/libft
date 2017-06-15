/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 20:01:20 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/15 18:20:16 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rb_tree.h"

/*	1er cas :
 *	Le param node est la racine de l'arbre
 *	Sa couleur est donc noir pour etre ok avec la regle 2
 *	Comme ca ajoute un node noir a chaque chemin, la regle 5 est respectee
*/

void	insert_case1(t_rb_node *node)
{
	ft_putendl("case 1");
	if (node->parent == NULL)
		node->color = RB_BLACK;
	else
		insert_case2(node);
}

/*	2eme cas :
 *	Le daron du noeud est noir
 *	Donc la regle 4 est respectee
 *	Dans ce cas l'arbre est toujours valide
 *	la regle 5 est toujours respectee car ce noeud aura deux feuilles noires
 */

void	insert_case2(t_rb_node *node)
{
	ft_putendl("case 2");
	if (node->parent->color == RB_BLACK)
		return ;
	else
		insert_case3(node);
}

/* 3eme cas :
 *	si parent et oncle sont rouge, alors ils deviennent rouge et le grandparent
 *	devient rouge pour respecter la propriete 5
 *	maintenant que le noeud a un parent noir, il faut reverifier toute les
 *	couleurs des nodes a partir du grand pere
*/

void	insert_case3(t_rb_node *node)
{
	ft_putendl("case 3");
	t_rb_node *unc;
	t_rb_node *gp;

	unc = uncle(node);
	if ((unc != NULL) && (unc->color == RB_RED))
	{
		node->parent->color = RB_BLACK;
		unc->color = RB_BLACK;
		gp = grandparent(node);
		gp->color = RB_RED;
		insert_case1(gp);
	}
	else
		insert_case4(node);
}

/* 4eme cas :
*	le parent est rouge, l'oncle est noir, et le noeud est celui de droite
*	dans ce cas, il faut tout echanger pour
*
*
*
*/

void	insert_case4(t_rb_node *node)
{
	ft_putendl("case 4");
	t_rb_node *gp;
	t_rb_node *save_p;
	t_rb_node *save_n;

	gp = grandparent(node);
	if ((node == node->parent->right) && (node->parent == gp->left))
	{
		save_p = gp->left;
		save_n = node->left;
		rotate_left(node, save_p, save_n);
		node = node->left;
	}
	else if ((node == node->parent->left) && (node->parent == gp->right))
	{
		save_p = gp->right;
		save_n = node->right;
		rotate_right(node, save_p, save_n);
		node = node->right;
	}
	insert_case5(node);
}

void	insert_case5(t_rb_node *node)
{
	ft_putendl("case 5");
	t_rb_node *gp;
	t_rb_node *save_p;
	t_rb_node *save_n;

	gp = grandparent(node);
	node->parent->color = RB_BLACK;
	gp->color = RB_RED;
	if (node == node->parent->left)
	{
		save_p = gp->right;
		save_n = node->right;
		rotate_right(gp, save_p, save_n);
	}
	else
	{
		save_p = gp->left;
		save_n = node->left;
		rotate_left(gp, save_p, save_n);
	}

}
