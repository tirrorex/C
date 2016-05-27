/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:55:24 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 17:57:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*palst;

	if (alst && new)
	{
		palst = *alst;
		if (palst)
		{
			while (palst->next)
				palst = palst->next;
			palst->next = new;
		}
		else
			*alst = new;
	}
}
