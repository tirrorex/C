/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 19:17:42 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:34:35 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int			key_hook(int keycode, t_env *param)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 126)
		param->vpos -= 5;
	else if (keycode == 125)
		param->vpos += 5;
	else if (keycode == 123)
		param->hpos -= 5;
	else if (keycode == 124)
		param->hpos += 5;
	else if (keycode == 34)
		param->proj = 1;
	else if (keycode == 35)
		param->proj = 2;
	regenerate_map(param);
	mlx_destroy_image(param->mlx, param->img->ptr);
	param->img->ptr = mlx_new_image(param->mlx, 1080, 1080);
	draw(param->img, param->coord2d);
	mlx_put_image_to_window(param->mlx, param->win, param->img->ptr, 0, 0);
	return (0);
}

static int			mouse_hook(int mousecode, int x, int y, t_env *param)
{
	if (mousecode == 5)
		param->zoom += 5;
	else if (mousecode == 4)
		param->zoom -= 5;
	else if (mousecode == 1)
	{
		param->hpos = x;
		param->vpos = y;
	}
	regenerate_map(param);
	mlx_destroy_image(param->mlx, param->img->ptr);
	param->img->ptr = mlx_new_image(param->mlx, 1080, 1080);
	draw(param->img, param->coord2d);
	mlx_put_image_to_window(param->mlx, param->win, param->img->ptr, 0, 0);
	return (0);
}

static int			expose_hook(t_env *param)
{
	draw(param->img, param->coord2d);
	mlx_put_image_to_window(param->mlx, param->win, param->img->ptr, 0, 0);
	return (0);
}

static t_img		*init_img(void *mlx_ptr)
{
	t_img		*img;

	if (!(img = (t_img*)malloc(sizeof(t_img))))
		exit(-1);
	img->ptr = mlx_new_image(mlx_ptr, 1080, 1080);
	img->data = (unsigned char*)mlx_get_data_addr(img->ptr, &img->bits,
			&img->size_line, &img->endian);
	return (img);
}

void				trace_map(t_list *list)
{
	t_env	ptr;

	ptr.coord2d = parser_map(list);
	ptr.proj = 1;
	ptr.zoom = 30;
	ptr.vpos = 200;
	ptr.hpos = 200;
	ptr.mlx = mlx_init();
	ptr.win = mlx_new_window(ptr.mlx, 1380, 1080, "42");
	init_menu(ptr.mlx, ptr.win);
	ptr.img = init_img(ptr.mlx);
	mlx_key_hook(ptr.win, key_hook, &ptr);
	mlx_mouse_hook(ptr.win, mouse_hook, &ptr);
	mlx_expose_hook(ptr.win, expose_hook, &ptr);
	mlx_loop(ptr.mlx);
}
