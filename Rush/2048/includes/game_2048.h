/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 16:22:04 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/01 20:27:34 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

# include <stdlib.h>
# include <string.h>
# include <libft.h>
# include <signal.h>
# include <ncurses.h>
# include <time.h>

# define ESCAPE				27
# define NB_SQUARE			16

typedef struct				s_data
{
	int						height;
	int						width;
}							t_data;

typedef struct				s_boxes
{
	int						i;
	int						j;
	int						x;
	int						y;
	int						w;
	int						h;
}							t_boxes;

typedef struct				s_win_border
{
	chtype					ls;
	chtype					rs;
	chtype					ts;
	chtype					bs;
	chtype					tl;
	chtype					tr;
	chtype					bl;
	chtype					br;

}							t_win_border;

typedef struct				s_win
{
	int						startx;
	int						starty;
	int						height;
	int						width;
	WINDOW					*win;
	t_win_border			border;
	int						square;
	int						xpos;
	int						ypos;
}							t_win;

enum						e_const
{
	WIN_VALUE = 2048
};

int							game_2048(t_data *data, t_win *p_win);
void						signal_handling(void);
void						signalhandler(int sig);
void						create_boxes(t_win *p_win);
void						init_win_param(t_win *p_win, t_data *data);
void						place_numbers(t_win *p_win);
int							test_squares(t_win *p_win);
void						print_numbers(t_win *p_win);
void						deal_with_keys(int key, t_win *p_win);
void						merge_line(int *a, int *b, int *c, int *d);
void						place_number(t_win *p_win);
int							check_loose(t_win *p_win);
void						check_win(t_win *p_win);
void						reset_term(t_win *p_win);
t_win						create_sub_window(int height, int width, int y,
	int x);

#endif
