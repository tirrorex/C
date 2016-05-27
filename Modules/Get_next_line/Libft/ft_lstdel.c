/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:31:09 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:48:11 by tnoah            ###   ########.fr       */
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
			(*del)((palst)->content, palst->content_size);
			pnext = palst->next;
			free(palst);
			palst = pnext;
		}
		*alst = NULL;
	}
}
