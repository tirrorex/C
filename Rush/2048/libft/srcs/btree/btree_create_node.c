/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:58:16 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 22:39:12 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree			*btree_create_node(void *data)
{
	t_btree		*btree;

	btree = NULL;
	if (!(btree = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	if (btree)
	{
		btree->left = 0;
		btree->right = 0;
		btree->data = data;
	}
	return (btree);
}
