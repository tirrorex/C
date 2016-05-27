/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_btree.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:30:03 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 20:08:23 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BTREE_H
# define LIBFT_BTREE_H

typedef struct				s_btree
{
	struct s_btree			*left;
	struct s_btree			*right;
	void					*data;
}							t_btree;

enum						e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct				s_rb_node
{
	struct s_rb_node		*parent;
	struct s_rb_node		*right;
	struct s_rb_node		*left;
	void					*data;
	enum e_rb_color			color;
}							t_rb_node;

t_btree						*btree_create_node(void *data);
void						btree_apply_prefix(t_btree *root,
		void (*applyf)(void *));
void						btree_apply_infix(t_btree *root,
		void (*applyf)(void *));
void						btree_apply_suffix(t_btree *root,
		void (*applyf)(void *));
void						btree_insert_data(t_btree **root, void *data,
		int (*cmpf)(void *, void *));
void						*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *));
void						ft_display_tree(t_btree *root);
int							ft_compare_tree(void *a, void *b);

#endif
