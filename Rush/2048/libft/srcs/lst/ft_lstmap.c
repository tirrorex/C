/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:31:37 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:48:34 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*list;
	t_list		*new;
	t_list		*tmp;

	list = NULL;
	if (lst && f)
	{
		if ((list = (*f)(lst)) == NULL)
			return (NULL);
		tmp = list;
		lst = lst->next;
		while (lst)
		{
			if ((new = (*f)(lst)) == NULL)
				return (NULL);
			tmp->next = new;
			tmp = new;
			lst = lst->next;
		}
		tmp->next = NULL;
	}
	return (list);
}
