/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regenerate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 17:21:49 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:23:08 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		proj_iso(t_2d *coord2d, int zoom, int hpos, int vpos)
{
	if (zoom < 0)
		zoom = 0;
	coord2d->x = (coord2d->xbackup - coord2d->ybackup) * zoom + hpos * 2;
	coord2d->y = (coord2d->ybackup + coord2d->xbackup) * zoom + vpos / 4 -
		coord2d->zbackup * 2;
	coord2d->x = coord2d->x >= WIDTH ? WIDTH - 1 : coord2d->x;
	coord2d->y = coord2d->y >= HEIGHT ? HEIGHT - 1 : coord2d->y;
	coord2d->x = coord2d->x <= 0 ? 0 : coord2d->x;
	coord2d->y = coord2d->y <= 0 ? 0 : coord2d->y;
}

static void		proj_parallele(t_2d *coord2d, int zoom, int hpos, int vpos)
{
	if (zoom < 0)
		zoom = 0;
	coord2d->x = coord2d->xbackup * zoom + hpos - ((coord2d->zbackup *
				(zoom / 15)));
	coord2d->y = coord2d->ybackup * zoom + vpos - ((coord2d->zbackup *
				(zoom / 15)));
	coord2d->x = coord2d->x >= WIDTH ? WIDTH - 1 : coord2d->x;
	coord2d->y = coord2d->y >= HEIGHT ? HEIGHT - 1 : coord2d->y;
	coord2d->x = coord2d->x <= 0 ? 0 : coord2d->x;
	coord2d->y = coord2d->y <= 0 ? 0 : coord2d->y;
}

void			regenerate_map(t_env *param)
{
	int		i;

	i = 0;
	while (i < param->coord2d[i].xlen * param->coord2d[i].ylen)
	{
		if (param->proj == 1)
			proj_iso(&param->coord2d[i], param->zoom, param->hpos, param->vpos);
		else if (param->proj == 2)
			proj_parallele(&param->coord2d[i], param->zoom, param->hpos,
				param->vpos);
		i++;
	}
}
