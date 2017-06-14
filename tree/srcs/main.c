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
        printf("%s  ", (char*)node->data);
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
//	int i = getLevelCount(tr);

	tr = NULL;
	test = NULL;

//	(void)tr;
//	(void)test;

	rb_insert(&tr, "1", (void *)&ft_strcmp);
	rb_insert(&tr, "2", (void *)&ft_strcmp);
	rb_insert(&tr, "3", (void *)&ft_strcmp);
	rb_insert(&tr, "4", (void *)&ft_strcmp);
	rb_insert(&tr, "5", (void *)&ft_strcmp);
	rb_insert(&tr, "6", (void *)&ft_strcmp);
	rb_insert(&tr, "7", (void *)&ft_strcmp);
	rb_insert(&tr, "8", (void *)&ft_strcmp);
	rb_insert(&tr, "9", (void *)&ft_strcmp);
	rb_insert(&tr, "10", (void *)&ft_strcmp);
	rb_insert(&tr, "11", (void *)&ft_strcmp);

	btree_insert_data(&test, "1", (void *)&ft_strcmp);
	btree_insert_data(&test, "2", (void *)&ft_strcmp);
	btree_insert_data(&test, "3", (void *)&ft_strcmp);
	btree_insert_data(&test, "4", (void *)&ft_strcmp);
	btree_insert_data(&test, "5", (void *)&ft_strcmp);
	btree_insert_data(&test, "6", (void *)&ft_strcmp);
	btree_insert_data(&test, "7", (void *)&ft_strcmp);
	btree_insert_data(&test, "8", (void *)&ft_strcmp);
	btree_insert_data(&test, "9", (void *)&ft_strcmp);
	btree_insert_data(&test, "10", (void *)&ft_strcmp);
	btree_insert_data(&test, "11", (void *)&ft_strcmp);
/*
	btree_insert_data(&test, "1", (void*)&ft_strcmp);
	btree_insert_data(&test, "2", (void*)&ft_strcmp);
	btree_insert_data(&test, "3", (void*)&ft_strcmp);
	btree_insert_data(&test, "4", (void*)&ft_strcmp);
	btree_insert_data(&test, "5", (void*)&ft_strcmp);
	btree_insert_data(&test, "6", (void*)&ft_strcmp);
	btree_insert_data(&test, "7", (void*)&ft_strcmp);
	btree_insert_data(&test, "8", (void*)&ft_strcmp);
*/
//	ft_putendl("tr = ");
//	btree_apply_infix((t_btree*)tr, (void *)ft_putendl);
//	ft_putstr("\n\n test = \n");
//	btree_apply_infix(test, (void *)ft_putendl);
	printElements(tr);
	ft_putstr("\n\n");
	printElements((t_rb_node*)test);
	return (0);
}
