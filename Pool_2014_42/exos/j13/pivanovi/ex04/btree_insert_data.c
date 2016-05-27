/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 02:42:03 by pivanovi          #+#    #+#             */
/*   Updated: 2014/08/15 02:42:04 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void				btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = btree_create_node(item);
	else
	{
		if (cmpf((*root)->item, item) > 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}
