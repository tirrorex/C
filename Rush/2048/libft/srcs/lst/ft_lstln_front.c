/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:19:16 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 18:19:50 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstln_front(t_list **alst, void const *content, size_t c_size)
{
	t_list		*list;

	if (alst)
	{
		if ((list = ft_lstln(content, c_size)) == NULL)
			return (NULL);
		ft_lstadd_front(alst, list);
		return (list);
	}
	return (NULL);
}
