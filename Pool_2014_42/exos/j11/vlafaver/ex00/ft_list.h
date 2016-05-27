/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlafaver <vlafaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 23:01:00 by vlafaver          #+#    #+#             */
/*   Updated: 2014/08/13 23:01:24 by vlafaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_LIST_H
# define  FT_LIST_H

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif
