/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 23:09:11 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/22 14:28:33 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_insert_data(t_btree **root, void *data, int (*cmpf)(void *,
			void *))
{
	t_btree		*proot;

	if (*root && data && cmpf)
	{
		proot = *root;
		if (cmpf(proot->data, data) >= 0)
		{
			if (!proot->right)
				proot->right = btree_create_node(data);
			else
				btree_insert_data(&proot->right, data, cmpf);
		}
		if (cmpf(proot->data, data) < 0)
		{
			if (!proot->left)
				proot->left = btree_create_node(data);
			else
				btree_insert_data(&proot->left, data, cmpf);
		}
	}
}
