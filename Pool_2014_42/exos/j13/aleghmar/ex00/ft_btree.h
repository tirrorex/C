/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleghmar <aleghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 23:26:20 by aleghmar          #+#    #+#             */
/*   Updated: 2014/08/15 23:29:09 by aleghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_BTREE_H
# define FT_BTREE_H
typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;
#endif
