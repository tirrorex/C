/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:09:07 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:09:11 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void		put_lst(t_pile **pile)
{
	t_elem		*tmp;

	tmp = (*pile)->head;
	while (tmp)
	{
		ft_printf("%d ", tmp->content);
		tmp = tmp->down;
	}
}

void			put_result(t_pile **pile1, t_pile **pile2)
{
	ft_printf("\na: ");
	put_lst(pile1);
	ft_printf("\nb: ");
	put_lst(pile2);
	ft_printf("\n\n");
}
