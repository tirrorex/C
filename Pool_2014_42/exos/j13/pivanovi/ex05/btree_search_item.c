/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:55:06 by pivanovi          #+#    #+#             */
/*   Updated: 2014/08/15 16:55:06 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		*btree_search_item(t_bree *root, void *data_red,
	int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_red, cmpf);
		if (root->item)
		{
			if (!cmpf(root->item, data_red))
				return (root);
		}
		if (root->right)
			btree_search_item(root->right, data_red, cmpf);
	}
	return (0);
}
