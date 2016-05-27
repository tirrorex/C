/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_pile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:42:11 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:42:13 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void		rotate_pile(t_pile **pile1, t_pile **pile2, t_option *option)
{
	int			min;
	size_t		pos;

	min = get_min(pile1);
	pos = get_pos(pile1, min);
	if (pos < (*pile1)->length / 2)
	{
		while ((*pile1)->head->content != min)
		{
			ra(pile1, pile2, option);
			if (option->v == 0)
				ft_printf(" ");
		}
	}
	else
	{
		while ((*pile1)->head->content != min)
		{
			rra(pile1, pile2, option);
			if (option->v == 0)
				ft_printf(" ");
		}
	}
}
