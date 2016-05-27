/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:12:27 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/28 08:59:22 by ale-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void			reset_term(t_win *p_win)
{
	echo();
	delwin(p_win->win);
	endwin();
}

static void		init_data(void)
{
	initscr();
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	init_pair(2, COLOR_WHITE, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_WHITE);
	init_pair(4, COLOR_YELLOW, COLOR_WHITE);
	init_pair(5, COLOR_YELLOW, COLOR_WHITE);
	init_pair(6, COLOR_YELLOW, COLOR_WHITE);
	init_pair(7, COLOR_YELLOW, COLOR_WHITE);
	init_pair(8, COLOR_YELLOW, COLOR_WHITE);
	curs_set(0);
	noecho();
	keypad(stdscr, TRUE);
}

void			init_win_param(t_win *p_win, t_data *data)
{
	int			i;
	int			x;
	int			y;

	i = 0;
	getmaxyx(stdscr, data->height, data->width);
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			p_win[i] = create_sub_window(data->height / 4 - 2,
				data->width / 4 - 2, (data->height / 4) * y,
				(data->width / 4) * x);
			create_boxes(&p_win[i]);
			p_win[i].xpos = x;
			p_win[i].ypos = y;
			x++;
			i++;
		}
		y++;
	}
}

int				test_squares(t_win *p_win)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		if (p_win[i].square != 0)
			j++;
		i++;
	}
	if (j == 15)
		return (1);
	else
		return (0);
}

int				main(void)
{
	t_data		data;
	t_win		p_win[NB_SQUARE];

	srand(time(NULL));
	init_data();
	getmaxyx(stdscr, data.height, data.width);
	if (data.height > 21 && data.width > 40)
	{
		init_win_param(p_win, &data);
		place_numbers(p_win);
		print_numbers(p_win);
	}
	else
		printw("window is too small");
	refresh();
	if (game_2048(&data, p_win))
		check_win(p_win);
	reset_term(p_win);
	return (0);
}
