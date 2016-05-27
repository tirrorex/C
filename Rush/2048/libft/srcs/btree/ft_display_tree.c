/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 22:04:28 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 22:03:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			print_tree(void *n)
{
	int		i;

	i = *((int*)n);
	ft_printf("->%d", i);
}

static void			print_prefix(t_btree *tree)
{
	void	(*f)(void *);

	f = print_tree;
	if (tree)
		btree_apply_prefix(tree, f);
}

static void			print_infix(t_btree *tree)
{
	void	(*f)(void *);

	f = print_tree;
	if (tree)
		btree_apply_infix(tree, f);
}

static void			print_suffix(t_btree *tree)
{
	void	(*f)(void *);

	f = print_tree;
	if (tree)
		btree_apply_suffix(tree, f);
}

void				ft_display_tree(t_btree *root)
{
	ft_printf("Parcours prefix :\n");
	print_prefix(root);
	ft_printf("\n");
	ft_printf("Parcours infix :\n");
	print_infix(root);
	ft_printf("\n");
	ft_printf("Parcours suffix :\n");
	print_suffix(root);
	ft_printf("\n");
}
