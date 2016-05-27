/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_with_keys.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 13:27:26 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/01 13:27:28 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void			merge_bottom(t_win *p_win)
{
	merge_line(&p_win[12].square, &p_win[8].square, &p_win[4].square,
		&p_win[0].square);
	merge_line(&p_win[13].square, &p_win[9].square, &p_win[5].square,
		&p_win[1].square);
	merge_line(&p_win[14].square, &p_win[10].square, &p_win[6].square,
		&p_win[2].square);
	merge_line(&p_win[15].square, &p_win[11].square, &p_win[7].square,
		&p_win[3].square);
}

static void			merge_top(t_win *p_win)
{
	merge_line(&p_win[0].square, &p_win[4].square, &p_win[8].square,
		&p_win[12].square);
	merge_line(&p_win[1].square, &p_win[5].square, &p_win[9].square,
		&p_win[13].square);
	merge_line(&p_win[2].square, &p_win[6].square, &p_win[10].square,
		&p_win[14].square);
	merge_line(&p_win[3].square, &p_win[7].square, &p_win[11].square,
		&p_win[15].square);
}

static void			merge_left(t_win *p_win)
{
	merge_line(&p_win[0].square, &p_win[1].square, &p_win[2].square,
		&p_win[3].square);
	merge_line(&p_win[4].square, &p_win[5].square, &p_win[6].square,
		&p_win[7].square);
	merge_line(&p_win[8].square, &p_win[9].square, &p_win[10].square,
		&p_win[11].square);
	merge_line(&p_win[12].square, &p_win[13].square, &p_win[14].square,
		&p_win[15].square);
}

static void			merge_right(t_win *p_win)
{
	merge_line(&p_win[3].square, &p_win[2].square, &p_win[1].square,
		&p_win[0].square);
	merge_line(&p_win[7].square, &p_win[6].square, &p_win[5].square,
		&p_win[4].square);
	merge_line(&p_win[11].square, &p_win[10].square, &p_win[9].square,
		&p_win[8].square);
	merge_line(&p_win[15].square, &p_win[14].square, &p_win[13].square,
		&p_win[12].square);
}

void				deal_with_keys(int key, t_win *p_win)
{
	if (key == KEY_DOWN)
		merge_bottom(p_win);
	else if (key == KEY_UP)
		merge_top(p_win);
	else if (key == KEY_LEFT)
		merge_left(p_win);
	else if (key == KEY_RIGHT)
		merge_right(p_win);
	place_number(p_win);
	print_numbers(p_win);
}
