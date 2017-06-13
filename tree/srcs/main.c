/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:37:42 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/13 20:38:49 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
#include "rb_tree.h"

#include <stdio.h>

int getLevelCount(t_rb_node *node)
{
	int l;
	int r;

    if (node == NULL)
        return 0;
    l = 1 + getLevelCount(node->left);
	r = 1 + getLevelCount(node->right);

    if (l > r)
        return (l);
    else
        return (r);
}

void printLevel(t_rb_node *node, int level)
{
    if (node != NULL && level == 0)
        printf("%s  ", node->data);
    else if (node != NULL)
    {
		printLevel(node->left, level - 1);
		printLevel(node->right, level - 1);
	}
}

void printElements(t_rb_node *node)
{
    int i;
	int b;

	b = getLevelCount(node);
    for (i = 0; i < b; i++)
	{
		printf("level = %d : ", i);
		printLevel(node, i);
		printf("\n");
	}
}

int		main(void)
{
	t_rb_node *tr;
	t_btree *test;

	tr = NULL;
	test = NULL;

	rb_insert(&tr, "10", (void *)&ft_strcmp);
	rb_insert(&tr, "3", (void *)&ft_strcmp);
	rb_insert(&tr, "478", (void *)&ft_strcmp);
	rb_insert(&tr, "657", (void *)&ft_strcmp);
	rb_insert(&tr, "55", (void *)&ft_strcmp);
	rb_insert(&tr, "6", (void *)&ft_strcmp);
	rb_insert(&tr, "20", (void *)&ft_strcmp);
	rb_insert(&tr, "2", (void *)&ft_strcmp);
	rb_insert(&tr, "123", (void *)&ft_strcmp);
	rb_insert(&tr, "8", (void *)&ft_strcmp);
	rb_insert(&tr, "787", (void *)&ft_strcmp);

//	btree_apply_infix((t_btree*)tr, (void *)ft_putendl);
	printElements(tr);
	return (0);
}
