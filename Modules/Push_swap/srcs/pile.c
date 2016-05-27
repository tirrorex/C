/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:33:01 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/03 18:13:13 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void			pile_del(t_pile **pile)
{
	t_elem		*tmp;
	t_elem		*del;

	del = NULL;
	tmp = NULL;
	if (*pile)
	{
		tmp = (*pile)->head;
		while (tmp)
		{
			del = tmp;
			tmp = tmp->down;
			free(del);
		}
		free(*pile);
		*pile = NULL;
	}
}

static void		create_elem(t_pile **pile, int value)
{
	t_elem		*elem;

	elem = NULL;
	if (*pile)
	{
		elem = (t_elem*)malloc(sizeof(t_elem));
		if (elem)
		{
			elem->content = value;
			elem->up = NULL;
			elem->down = NULL;
			if (!((*pile)->tail))
			{
				(*pile)->head = elem;
				(*pile)->tail = elem;
			}
			else
			{
				(*pile)->tail->down = elem;
				elem->up = (*pile)->tail;
				(*pile)->tail = elem;
			}
			(*pile)->length++;
		}
	}
}

void			pile_push(t_pile **pile, char **str, int start)
{
	int			i;

	i = ft_tablen(str);
	if (*pile)
	{
		while (start < i)
		{
			create_elem(pile, ft_atoi(str[start]));
			start++;
		}
	}
}

t_pile			*create_pile(void)
{
	t_pile		*pile;

	pile = NULL;
	pile = (t_pile*)malloc(sizeof(t_pile));
	if (pile)
	{
		pile->length = 0;
		pile->head = NULL;
		pile->tail = NULL;
	}
	return (pile);
}
