/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:56:25 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 18:19:51 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstln(void const *content, size_t c_size)
{
	t_list		*list;

	if ((list = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (!content)
		list->c_size = 0;
	else
		list->c_size = c_size;
	list->content = (void*)content;
	list->next = NULL;
	return (list);
}
