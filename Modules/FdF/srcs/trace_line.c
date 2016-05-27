/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 17:23:33 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:29:37 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		trace_line(t_img *img, t_2d *p0, t_2d *p1)
{
	t_line	line;
	int		i;

	i = 0;
	line.x = fabs(p1->x - p0->x);
	line.y = fabs(p1->y - p0->y);
	line.length = sqrt(line.x * line.x + line.y * line.y);
	line.startx = p0->x;
	line.starty = p0->y;
	while (i++ < line.length)
	{
		if (line.startx < p1->x)
			line.startx += (line.x) / line.length;
		else
			line.startx -= (line.x) / line.length;
		if (line.starty < p1->y)
			line.starty += (line.y) / line.length;
		else
			line.starty -= (line.y) / line.length;
		print_pixel(img, line.startx, line.starty);
	}
}
