/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:48:08 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 14:40:47 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

void		rra(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if (*pile1)
	{
		if ((*pile1)->length > 2)
		{
			tmp = (*pile1)->tail;
			(*pile1)->tail = tmp->up;
			tmp->up->down = NULL;
			tmp->up = NULL;
			tmp->down = (*pile1)->head;
			tmp->down->up = tmp;
			(*pile1)->head = tmp;
			ft_printf("rra");
			option->size++;
			if (option->v)
				put_result(pile1, pile2);
		}
		else
			sa(pile1, pile2, option);
	}
}

void		rrb(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if (*pile2)
	{
		if ((*pile2)->length > 2)
		{
			tmp = (*pile2)->tail;
			(*pile2)->tail = tmp->up;
			tmp->up->down = NULL;
			tmp->up = NULL;
			tmp->down = (*pile2)->head;
			tmp->down->up = tmp;
			(*pile2)->head = tmp;
			ft_printf("rrb");
			option->size++;
			if (option->v)
				put_result(pile1, pile2);
		}
		else
			sa(pile1, pile2, option);
	}
}

static void	rrr_bis(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if ((*pile1)->length > 2)
	{
		tmp = (*pile1)->tail;
		(*pile1)->tail = tmp->up;
		tmp->up->down = NULL;
		tmp->up = NULL;
		tmp->down = (*pile1)->head;
		tmp->down->up = tmp;
		(*pile1)->head = tmp;
		ft_printf("rra");
		option->size++;
		if (option->v)
			put_result(pile1, pile2);
	}
	else
		sa(pile1, pile2, option);
}

void		rrr(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if (*pile1)
	{
		rrr_bis(pile1, pile2, option);
	}
	if (*pile2)
	{
		if ((*pile2)->length > 2)
		{
			tmp = (*pile2)->tail;
			(*pile2)->tail = tmp->up;
			tmp->up->down = NULL;
			tmp->up = NULL;
			tmp->down = (*pile2)->head;
			tmp->down->up = tmp;
			(*pile2)->head = tmp;
			ft_printf("rrb");
			option->size++;
			if (option->v)
				put_result(pile1, pile2);
		}
		else
			sa(pile1, pile2, option);
	}
}
