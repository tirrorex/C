/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:47:08 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 03:22:01 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void		sa(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if (*pile1 && (*pile1)->length > 1)
	{
		ft_swap_int(&(*pile1)->head->content, &(*pile1)->head->down->content);
	}
	ft_printf("sa");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}

void		sb(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if (*pile2 && (*pile2)->length > 1)
	{
		ft_swap_int(&(*pile2)->head->content, &(*pile2)->head->down->content);
	}
	ft_printf("sb");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}

void		ss(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if (*pile1 && (*pile1)->length > 1)
	{
		ft_swap_int(&(*pile1)->head->content, &(*pile1)->head->down->content);
	}
	if (*pile2 && (*pile2)->length > 1)
	{
		ft_swap_int(&(*pile2)->head->content, &(*pile2)->head->down->content);
	}
	ft_printf("ss");
	option->size++;
	if (option->v)
		put_result(pile1, pile2);
}
