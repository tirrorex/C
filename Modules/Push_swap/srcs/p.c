/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:47:20 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:23:09 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void		pa_bis(t_pile **pile1, t_pile **pile2)
{
	t_elem		*tmp;

	tmp = (*pile2)->head;
	if ((*pile2)->length == 1)
	{
		(*pile2)->length = 0;
		(*pile2)->head = NULL;
		(*pile2)->tail = NULL;
	}
	else
	{
		(*pile2)->head = tmp->down;
		tmp->down->up = NULL;
		tmp->down = NULL;
		(*pile2)->length--;
	}
	tmp->down = (*pile1)->head;
	tmp->up = NULL;
	(*pile1)->head = tmp;
	(*pile1)->length++;
}

static void		pb_bis(t_pile **pile1, t_pile **pile2)
{
	t_elem		*tmp;

	tmp = (*pile1)->head;
	if ((*pile1)->length == 1)
	{
		(*pile1)->length = 0;
		(*pile1)->head = NULL;
		(*pile1)->tail = NULL;
	}
	else
	{
		(*pile1)->head = tmp->down;
		tmp->down->up = NULL;
		tmp->down = NULL;
		(*pile1)->length--;
	}
	tmp->down = (*pile2)->head;
	tmp->up = NULL;
	(*pile2)->head = tmp;
	(*pile2)->length++;
}

void			pa(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if ((*pile2)->length > 0 && *pile1)
	{
		pa_bis(pile1, pile2);
	}
	ft_printf("pa");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}

void			pb(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if ((*pile1)->length > 0 && *pile2)
	{
		pb_bis(pile1, pile2);
	}
	ft_printf("pb");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}
