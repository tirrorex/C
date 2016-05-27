/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 23:06:21 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 20:15:28 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root && applyf)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		applyf(root->data);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
