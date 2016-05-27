/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_menu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 17:35:47 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:36:53 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			init_menu(void *mlx_ptr, void *win_ptr)
{
	mlx_string_put(mlx_ptr, win_ptr, 1100, 10, 16711680, "key i = proj iso");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 60, 16711680, "key p = proj par");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 110, 16711680, "key esc = echap");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 160, 16711680, "key up = up");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 210, 16711680, "key down = down");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 260, 16711680, "key left = left");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 310, 16711680, "key right = right");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 360, 16711680,
			"mousewheel up = zoom in");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 410, 16711680,
			"mousewheel down = zoom out");
	mlx_string_put(mlx_ptr, win_ptr, 1100, 460, 16711680,
			"mouseclic 1 = recenter");
}
