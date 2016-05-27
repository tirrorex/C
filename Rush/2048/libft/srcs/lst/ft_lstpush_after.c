/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_after.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:54:35 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 18:17:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpush_after(t_list *lst, void const *content, size_t c_size)
{
	t_list		*list;

	list = ft_lstnew(content, c_size);
	if (lst && list)
	{
		list->next = lst->next;
		lst->next = list;
	}
	return (list);
}
