/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_lvl_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:37:29 by ddinaut           #+#    #+#             */
/*   Updated: 2017/06/12 16:57:17 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int		btree_lvl_count(t_btree *root)
{
	int count;

	if (root == NULL)
		return (0);
	count = 0;
	return ((btree_lvl_count(root->left) - btree_lvl_count(root->right)) + (++count));
}
