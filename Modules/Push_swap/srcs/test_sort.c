/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:08:50 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:08:55 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		test_sort(t_pile **pile1, t_pile **pile2)
{
	t_elem		*tmp;

	tmp = NULL;
	if (*pile1)
	{
		tmp = (*pile1)->head;
		while (tmp->down != NULL)
		{
			if (tmp->content >= tmp->down->content)
				return (0);
			tmp = tmp->down;
		}
		if ((*pile2)->length > 0)
			return (2);
		else
			return (1);
	}
	return (0);
}
