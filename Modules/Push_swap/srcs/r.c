/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:47:40 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 03:20:59 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void		ra(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if (*pile1 && (*pile1)->length > 1)
	{
		tmp = (*pile1)->head;
		(*pile1)->head = tmp->down;
		tmp->down->up = NULL;
		tmp->down = NULL;
		tmp->up = (*pile1)->tail;
		tmp->up->down = tmp;
		(*pile1)->tail = tmp;
	}
	ft_printf("ra");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}

void		rb(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if (*pile2 && (*pile2)->length > 1)
	{
		tmp = (*pile2)->head;
		(*pile2)->head = tmp->down;
		tmp->down->up = NULL;
		tmp->down = NULL;
		tmp->up = (*pile2)->tail;
		tmp->up->down = tmp;
		(*pile2)->tail = tmp;
	}
	ft_printf("rb");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}

static void	rr_bis(t_pile **pile1)
{
	t_elem		*tmp;

	tmp = (*pile1)->head;
	(*pile1)->head = tmp->down;
	tmp->down->up = NULL;
	tmp->down = NULL;
	tmp->up = (*pile1)->tail;
	tmp->up->down = tmp;
	(*pile1)->tail = tmp;
}

void		rr(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	if (*pile1 && (*pile1)->length > 1)
	{
		rr_bis(pile1);
	}
	if (*pile2 && (*pile2)->length > 1)
	{
		tmp = (*pile2)->head;
		(*pile2)->head = tmp->down;
		tmp->down->up = NULL;
		tmp->down = NULL;
		tmp->up = (*pile2)->tail;
		tmp->up->down = tmp;
		(*pile2)->tail = tmp;
	}
	ft_printf("rr");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}
