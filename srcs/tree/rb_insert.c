/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:44:01 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/15 18:50:13 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
#include "rb_tree.h"
#include <stdio.h>

void	rotate_left(t_rb_node *node, t_rb_node *save_p, t_rb_node *save_n)
{
	node->left = node;
	node->left = save_p;
	save_p->right = save_n;
}

void	rotate_right(t_rb_node *node, t_rb_node *save_p, t_rb_node *save_n)
{
	node->right = node;
	node->right =  save_p;
	save_p->left = save_n;
}

t_rb_node	*grandparent(t_rb_node *node)
{
	if (node != NULL && node->parent != NULL)
		return (node->parent->parent);
	else
		return (NULL);
}

t_rb_node	*uncle(t_rb_node *node)
{
	t_rb_node *gp;

	if ((gp = grandparent(node)) == NULL)
		return (NULL);
	if (node->parent == gp->left)
		return (gp->right);
	else
		return (gp->left);
}

/*
void rb_insert(rbtree t, void* key, compare_func compare)
{
    node inserted_node;

	inserted_node = new_node(key, RED, NULL, NULL);
    if (t->root == NULL)
        t->root = inserted_node;
	else
	{
        node n = t->root;
        while (1)
		{
            int comp_result = compare(key, n->key);
            if (comp_result == 0)
			{
                free (inserted_node);
                return;
            }
			else if (comp_result < 0)
			{
                if (n->left == NULL)
				{
                    n->left = inserted_node;
                    break;
                }
				else
                    n = n->left;
            }
			else
			{
                assert (comp_result > 0);
                if (n->right == NULL)
				{
                    n->right = inserted_node;
                    break;
                }
				else
                    n = n->right;
            }
        }
        inserted_node->parent = n;
    }
    insert_case1(t, inserted_node);
    verify_properties(t);
}
*/

void	rb_insert(t_rb_node **root, void *data, int (*f)(void *, void *))
{
	t_rb_node *new;

	new = new_node(data, RB_RED, NULL, NULL);
	if (new->color == RB_RED)
		ft_putendl("red");
	else
		ft_putendl("black");
	(void)f;
	(*root) = new;
}

/*
void	rb_insert(t_rb_node **root, void *data, int (*f)(void *, void *))
{
	if (data == NULL)
		return ;
	if ((*root) == NULL)
	{
		//(*root) = rb_create(data);
		(*root) = (t_rb_node*)btree_create_node(data);
		insert_case1((*root));
	}
	else if ((*f)(data, (*root)->data) < 0)
	{
		rb_insert(&(*root)->left, data, f);
//		(*root)->left->parent = (*root);
		insert_case1((*root));
	}
	else
	{
		rb_insert(&(*root)->right, data, f);
//		(*root)->right->parent = (*root);
		insert_case1((*root));
	}
	insert_case1((*root));
	}*/
