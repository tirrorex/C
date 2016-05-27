/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/13 15:46:21 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/13 15:47:30 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int			check_size(t_data *data)
{
	data->max_width = get_max_width(data->pile);
	data->max_height = data->pile->length;
	ioctl(0, TIOCGWINSZ, data->wsize);
	return (0);
}
