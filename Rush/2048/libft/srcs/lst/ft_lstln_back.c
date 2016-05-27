/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:18:12 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 18:17:21 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstln_back(t_list **alst, void const *content, size_t c_size)
{
	t_list		*list;

	if (alst)
	{
		if (!(list = ft_lstln(content, c_size)))
			return (NULL);
		ft_lstadd_back(alst, list);
		return (list);
	}
	return (NULL);
}
