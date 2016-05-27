/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:39:20 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 03:23:21 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void		check_case(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	tmp = NULL;
	tmp = (*pile1)->head;
	if (tmp->content > tmp->down->content &&
		tmp->down->content > tmp->down->down->content)
	{
		ra(pile1, pile2, option);
		if (option->v == 0)
			ft_printf(" ");
		sa(pile1, pile2, option);
		ft_printf("\n");
	}
}

static void		check_particular_cases(t_pile **pile1, t_pile **pile2,
	t_option *option)
{
	if (*pile1)
	{
		if ((*pile1)->length == 3 && (*pile2)->length == 0)
			check_case(pile1, pile2, option);
	}
	if ((test_sort(pile1, pile2)) == 1)
		exit(1);
}

void			ft_push_swap(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if (*pile1 && *pile2)
	{
		if ((test_sort(pile1, pile2)) == 1)
			error_pushswap(2);
		if (option->v)
			put_result(pile1, pile2);
		check_particular_cases(pile1, pile2, option);
		pile_sort(pile1, pile2, option);
	}
}
