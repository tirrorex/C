/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/13 17:00:28 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/13 17:00:30 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int				get_max_width(t_pile *pile)
{
	int		value;
	t_elem	*elem;
	int		tmp;

	value = 1;
	elem = pile->head;
	while (elem)
	{
		tmp = ft_strlen(elem->content);
		if (tmp > value)
			value = tmp;
		elem = elem->down;
	}
	return (value);
}
