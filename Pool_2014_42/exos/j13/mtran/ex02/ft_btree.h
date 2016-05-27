/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran <mtran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 08:46:58 by mtran             #+#    #+#             */
/*   Updated: 2014/08/15 09:04:28 by mtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct			s_btree
{
	struct a_btree		*left;
	struct b_btree		*right;
	void				*item;
}						t_btree;

t_btree					*btree_create_node(void *item);
#endif
