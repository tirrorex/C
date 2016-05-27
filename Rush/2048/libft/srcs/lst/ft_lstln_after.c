/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln_after.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:14:48 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 18:18:00 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstln_after(t_list *lst, void const *content, size_t c_size)
{
	t_list		*list;

	list = ft_lstln(content, c_size);
	if (lst && list)
	{
		list->next = lst->next;
		lst->next = list;
	}
	return (list);
}
