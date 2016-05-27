/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran <mtran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 11:03:13 by mtran             #+#    #+#             */
/*   Updated: 2014/08/15 16:18:36 by mtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
	{
		if (root->left)
			btree_apply_suffix(root->left, applyf);
		if (root->right)
			btree_apply_suffix(root->right, applyf);
		(*applyf)(root->item);
	}
}
