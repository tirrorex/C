/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:29:24 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 17:11:01 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t c_size)
{
	t_list		*list;

	if ((list = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->c_size = 0;
	}
	else
	{
		if ((list->content = (void*)malloc(sizeof(c_size))) == NULL)
		{
			free(list);
			return (NULL);
		}
		ft_memcpy(list->content, content, c_size);
		list->c_size = c_size;
	}
	list->next = NULL;
	return (list);
}
