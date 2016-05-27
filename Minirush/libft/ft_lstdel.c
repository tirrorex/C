/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:31:09 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 13:39:04 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*palst;
	t_list		*pnext;

	if (alst && *alst && del)
	{
		palst = *alst;
		while (palst)
		{
			pnext = palst->next;
			ft_lstdelone(&palst, del);
			palst = pnext;
		}
		*alst = NULL;
	}
}
