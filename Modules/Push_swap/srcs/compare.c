/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:07:38 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:11:53 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int		test_top(t_pile **pile, int start)
{
	t_elem		*tmp;
	int			i;

	tmp = NULL;
	i = 0;
	if (*pile)
	{
		tmp = (*pile)->head;
		while (i++ < start)
			tmp = tmp->down;
		while (tmp->down != NULL)
		{
			if (tmp->content >= tmp->down->content)
				return (0);
			tmp = tmp->down;
		}
		return (1);
	}
	return (0);
}

static int		test_bottom(t_pile **pile, int stop)
{
	t_elem		*tmp;
	int			i;

	tmp = NULL;
	i = 1;
	if (*pile)
	{
		tmp = (*pile)->head;
		while (tmp->down != NULL && i < stop)
		{
			if (tmp->content >= tmp->down->content)
				return (0);
			i++;
			tmp = tmp->down;
		}
		return (1);
	}
	return (0);
}

void			check_top(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	tmp = (*pile1)->head;
	if (*pile1 && (*pile2)->length == 0)
	{
		if (tmp->content > tmp->down->content)
		{
			if (test_top(pile1, 1) == 1)
			{
				sa(pile1, pile2, option);
				ft_printf("\n");
			}
		}
	}
}

void			check_bottom(t_pile **pile1, t_pile **pile2, t_option *option)
{
	t_elem		*tmp;

	tmp = (*pile1)->tail;
	if (*pile1 && (*pile2)->length == 0)
	{
		if (tmp->content < tmp->up->content)
			if (test_bottom(pile1, (*pile1)->length - 2) == 1)
			{
				rra(pile1, pile2, option);
				if (option->v == 0)
					ft_printf(" ");
				rra(pile1, pile2, option);
				if (option->v == 0)
					ft_printf(" ");
				sa(pile1, pile2, option);
				if (option->v == 0)
					ft_printf(" ");
				ra(pile1, pile2, option);
				if (option->v == 0)
					ft_printf(" ");
				ra(pile1, pile2, option);
			}
	}
}
