/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:09:18 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:09:20 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void		check_top_and_bottom(t_pile **pile1, t_pile **pile2,
	t_option *option)
{
	t_elem		*tmp;

	tmp = (*pile1)->head;
	check_top(pile1, pile2, option);
	if ((test_sort(pile1, pile2)) == 1)
	{
		if (option->s == 1)
			ft_printf("\nNumber of permutations: %d\n", option->size);
		exit(1);
	}
	check_bottom(pile1, pile2, option);
	if ((test_sort(pile1, pile2)) == 1)
	{
		if (option->s == 1)
			ft_printf("\nNumber of permutations: %d\n", option->size);
		exit(1);
	}
}

int		get_min(t_pile **pile)
{
	int			min;
	t_elem		*tmp;

	if (*pile)
	{
		tmp = (*pile)->head;
		min = (*pile)->head->content;
		while (tmp)
		{
			if (tmp->content <= min)
				min = tmp->content;
			tmp = tmp->down;
		}
		return (min);
	}
	return (0);
}

size_t	get_pos(t_pile **pile, int min)
{
	size_t		pos;
	t_elem		*tmp;

	if (*pile)
	{
		tmp = (*pile)->head;
		pos = 0;
		while (tmp)
		{
			if (tmp->content == min)
				return (pos);
			pos++;
			tmp = tmp->down;
		}
		return (pos);
	}
	return (0);
}

static int		sort_pile(t_pile **pile1, t_pile **pile2, t_option *option)
{
	if (*pile1 && *pile2)
	{
		rotate_pile(pile1, pile2, option);
		if ((test_sort(pile1, pile2)) == 2)
		{
			while ((*pile2)->length > 0)
			{
				pa(pile1, pile2, option);
				if (option->v == 0 && (*pile2)->length > 0)
					ft_printf(" ");
			}
		}
		else
		{
			pb(pile1, pile2, option);
			if (option->v == 0)
				ft_printf(" ");
		}
		if ((test_sort(pile1, pile2)) == 1)
			return (1);
	}
	return (0);
}

void			pile_sort(t_pile **pile1, t_pile **pile2, t_option *option)
{
	check_top_and_bottom(pile1, pile2, option);
	while (sort_pile(pile1, pile2, option) == 0)
		;
	if (option->v == 0)
		ft_printf("\n");
	if (option->s == 1)
		ft_printf("Number of permutations: %d\n", option->size);
	exit(1);
}
