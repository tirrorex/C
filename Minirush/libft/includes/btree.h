/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 22:50:52 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/07 18:39:42 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

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

#endif
