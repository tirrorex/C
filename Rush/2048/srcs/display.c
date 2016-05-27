/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 08:45:34 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/28 09:03:16 by ale-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

t_win			create_sub_window(int height, int width, int y, int x)
{
	t_win	p_win;

	p_win.win = subwin(stdscr, height, width, x, y);
	p_win.border.ls = ' ';
	p_win.border.rs = ' ';
	p_win.border.ts = ' ';
	p_win.border.bs = ' ';
	p_win.border.tl = ' ';
	p_win.border.tr = ' ';
	p_win.border.bl = ' ';
	p_win.border.br = ' ';
	p_win.startx = x;
	p_win.starty = y;
	p_win.height = height;
	p_win.width = width;
	p_win.square = 0;
	return (p_win);
}

void			place_numbers(t_win *p_win)
{
	int a;
	int b;
	int value;

	if (test_squares(p_win) == 1)
		return ;
	a = (int)rand() % 16;
	b = (int)rand() % 16;
	value = ((int)rand() % 10) ? 2 : 4;
	if (p_win[a].square == 0 && p_win[b].square == 0 && a != b)
	{
		p_win[a].square = value;
		p_win[b].square = value;
		return ;
	}
	else
		place_numbers(p_win);
}

void			print_numbers(t_win *p_win)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		mvprintw(p_win[i].starty + (p_win[i].height / 2),
			p_win[i].startx + (p_win[i].width / 2), "    ");
		if (p_win[i].square != 0)
		{
			mvprintw(p_win[i].starty + (p_win[i].height / 2),
				p_win[i].startx + (p_win[i].width / 2), "%d", p_win[i].square);
		}
		i++;
	}
	refresh();
}

void			create_boxes(t_win *p_win)
{
	attron(COLOR_PAIR(1));
	mvaddch(p_win->starty, p_win->startx, p_win->border.tl);
	mvaddch(p_win->starty, p_win->startx + p_win->width, p_win->border.tr);
	mvaddch(p_win->starty + p_win->height, p_win->startx, p_win->border.bl);
	mvaddch(p_win->starty + p_win->height, p_win->startx + p_win->width,
		p_win->border.br);
	mvhline(p_win->starty, p_win->startx + 1, p_win->border.ts,
		p_win->width - 1);
	mvhline(p_win->starty + p_win->height, p_win->startx + 1, p_win->border.bs,
		p_win->width - 1);
	mvvline(p_win->starty + 1, p_win->startx, p_win->border.ls,
		p_win->height - 1);
	mvvline(p_win->starty + 1, p_win->startx + p_win->width, p_win->border.rs,
		p_win->height - 1);
	attroff(COLOR_PAIR(1));
	refresh();
}
