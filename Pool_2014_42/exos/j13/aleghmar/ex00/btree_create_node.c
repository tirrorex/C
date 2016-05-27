/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleghmar <aleghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 23:25:16 by aleghmar          #+#    #+#             */
/*   Updated: 2014/08/15 23:29:29 by aleghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->item = item;
		tmp->right = NULL;
		tmp->left = NULL;
	}
	return (tmp);
}
