/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:19:03 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:19:05 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw(t_img *img, t_2d *map)
{
	int		i;

	i = 0;
	while (i < map[i].xlen * map[i].ylen)
	{
		if (i % map->xlen < map->xlen - 1)
			trace_line(img, &map[i], &map[i + 1]);
		if (i / map->xlen < map->ylen - 1)
			trace_line(img, &map[i], &map[i + map->xlen]);
		i++;
	}
}
