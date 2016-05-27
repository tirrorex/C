/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 14:30:00 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/28 08:59:40 by ale-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		reinit(t_win *p_win, t_data *data)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	getmaxyx(stdscr, data->height, data->width);
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			p_win[i].startx = (data->width / 4) * x;
			p_win[i].starty = (data->height / 4) * y;
			p_win[i].height = data->height / 4 - 2;
			p_win[i].width = data->width / 4 - 2;
			create_boxes(&p_win[i]);
			p_win[i].xpos = x;
			p_win[i].ypos = y;
			x++;
			i++;
		}
		y++;
	}
}

void			deal_with_resize(t_win *p_win, t_data *data)
{
	clear();
	endwin();
	refresh();
	getmaxyx(stdscr, data->height, data->width);
	if (data->height > 21 && data->width > 40)
	{
		reinit(p_win, data);
		print_numbers(p_win);
	}
	else
		printw("window is too small");
}

int				game_2048(t_data *data, t_win *p_win)
{
	int		key;

	while (42)
	{
		signal_handling();
		key = getch();
		if (key == ESCAPE)
			break ;
		else if (key == KEY_RESIZE)
			deal_with_resize(p_win, data);
		else if (key == KEY_DOWN)
			deal_with_keys(key, p_win);
		else if (key == KEY_UP)
			deal_with_keys(key, p_win);
		else if (key == KEY_LEFT)
			deal_with_keys(key, p_win);
		else if (key == KEY_RIGHT)
			deal_with_keys(key, p_win);
		if ((check_loose(p_win) == 15))
			return (1);
	}
	return (0);
}
