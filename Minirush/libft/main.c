/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 20:49:37 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/22 14:32:24 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int				main(void)
{
	t_btree		*root;
	int			(*f)(void*, void*);
	int		tab[] = {9, 12, 14, 17, 19, 23, 25, 50, 54, 67, 72, 76, 14, 13};

	root = btree_create_node((void*)(tab + 7));
	root->left = btree_create_node((void*)(tab + 3));
	root->right = btree_create_node((void*)(tab + 10));
	root->left->left = btree_create_node((void*)(tab + 1));
	root->left->right = btree_create_node((void*)(tab + 5));
	root->left->right->left = btree_create_node((void*)(tab + 4));
	root->left->left->right = btree_create_node((void*)(tab + 2));
	root->left->left->left = btree_create_node((void*)(tab));
	root->right->right = btree_create_node((void*)(tab + 11));
	root->right->left = btree_create_node((void*)(tab + 8));
	root->right->left->right = btree_create_node((void*)(tab + 9));
	ft_display_tree(root);
	f = ft_compare_tree;
	btree_insert_data(&root, (void*)(tab + 6), f);
	ft_display_tree(root);
	void		*data = btree_search_item(root, (void*)(tab + 12), f);
	printf("data: %p\n", data);
	printf("%d", (*(int *)btree_search_item(root, (void*)(tab + 12), f)));
	printf("%d", (*(int *)btree_level_count(root)));
}
