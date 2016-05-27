/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 18:19:12 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:17:57 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_2d			convert_into_2d(int x, int y, int z, int xlen)
{
	t_2d coord2d;

	coord2d.xbackup = x;
	coord2d.ybackup = y;
	coord2d.zbackup = z;
	coord2d.x = (x - y) * 30 + 400;
	coord2d.y = (y + x) * 30 + 50 - z * 2;
	coord2d.x = coord2d.x >= WIDTH ? WIDTH - 1 : coord2d.x;
	coord2d.y = coord2d.y >= HEIGHT ? HEIGHT - 1 : coord2d.y;
	coord2d.x = coord2d.x <= 0 ? 0 : coord2d.x;
	coord2d.y = coord2d.y <= 0 ? 0 : coord2d.y;
	coord2d.xlen = xlen;
	return (coord2d);
}
