/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:37:42 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/12 20:41:14 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
/*
int		main(void)
{
	t_btree	*tr;
	t_btree *ret;

	tr = NULL;
	btree_insert_data(&tr, "test1", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test4", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test2", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test3", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test444", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test5", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test6", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test43", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test54", (void *)&ft_strcmp);
	btree_insert_data(&tr, "found", (void *)&ft_strcmp);
	btree_insert_data(&tr, "test76", (void *)&ft_strcmp);

	ft_putendl("\ninfix :");
	btree_apply_infix(tr, (void*)ft_putendl);

	ft_putendl("\nretour btree_search :");
	ret = btree_search_item(tr, "test2", (void*)&ft_strcmp);
	if (ret == NULL)
		ft_putendl("not found");
	else
		ft_putendl(ret->item);

	ft_putendl("\n profondeur arbre :");
	ft_putnbr(btree_lvl_count(tr));

	return (0);
}
*/

int		main(void)
{
	t_rb_node *tr;

	tr = NULL;
	tr = rb_insert(&tr, "test", (void *)&ft_strcmp);

	ft_putstr("item = ");
	ft_putendl(tr->data);
	if (tr->color == RB_BLACK)
		ft_putendl("color node == black");
	else
		ft_putendl("color node == red");
	return (0);
}
