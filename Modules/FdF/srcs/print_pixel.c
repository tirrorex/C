/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pixel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 17:21:25 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:21:28 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		print_pixel(t_img *img, int x, int y)
{
	img->data[((x * (img->bits)) / 8) + y * img->size_line] = 0x00;
	img->data[((x * (img->bits)) / 8) + y * img->size_line + 1] = 0x00;
	img->data[((x * (img->bits)) / 8) + y * img->size_line + 2] = 0xff;
}
