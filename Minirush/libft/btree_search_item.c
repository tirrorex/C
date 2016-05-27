/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 23:11:14 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/22 14:27:38 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*tmp;

	if (root && data_ref && cmpf)
	{
		if (root->left)
		{
			tmp = btree_search_item(root->left, data_ref, cmpf);
			if (tmp)
				return (tmp);
		}
		if (cmpf(root->data, data_ref) == 0)
		{
			return (root->data);
		}
		if (root->right)
		{
			tmp = btree_search_item(root->right, data_ref, cmpf);
			if (tmp)
				return (tmp);
		}
	}
	return (NULL);
}
