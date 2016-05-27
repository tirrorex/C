/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:15:42 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/01 20:27:39 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void					place_number(t_win *p_win)
{
	int		a;
	int		value;

	if (test_squares(p_win) == 1)
		return ;
	a = (int)rand() % 16;
	value = ((int)rand() % 10) ? 2 : 4;
	if (p_win[a].square == 0)
	{
		p_win[a].square = value;
		return ;
	}
	else
		place_number(p_win);
}

void					check_win(t_win *p_win)
{
	int		i;
	int		value;
	int		test;

	i = 0;
	value = 0;
	while (i < 16)
	{
		if (p_win[i].square > value)
			value = p_win[i].square;
		i++;
	}
	reset_term(p_win);
	test = 2;
	while (test < WIN_VALUE && test < 2147395600)
		test *= 2;
	if (test == WIN_VALUE && value >= WIN_VALUE)
		ft_printf("You win, score is : %d\n", value);
	else
		ft_printf("You loose\n");
}

static int				check_line(int *a, int *b, int *c, int flag)
{
	if (*a != *b && *a != *c)
		flag = 1;
	return (flag);
}

int						check_loose(t_win *p_win)
{
	int		v;
	int		full;

	full = 7777;
	v = 0;
	v += check_line(&p_win[0].square, &p_win[1].square, &p_win[4].square, v);
	v += check_line(&p_win[1].square, &p_win[2].square, &p_win[5].square, v);
	v += check_line(&p_win[2].square, &p_win[3].square, &p_win[6].square, v);
	v += check_line(&p_win[3].square, &full, &p_win[7].square, v);
	v += check_line(&p_win[4].square, &p_win[5].square, &p_win[8].square, v);
	v += check_line(&p_win[5].square, &p_win[6].square, &p_win[9].square, v);
	v += check_line(&p_win[6].square, &p_win[7].square, &p_win[10].square, v);
	v += check_line(&p_win[7].square, &full, &p_win[11].square, v);
	v += check_line(&p_win[8].square, &p_win[9].square, &p_win[12].square, v);
	v += check_line(&p_win[9].square, &p_win[10].square, &p_win[13].square, v);
	v += check_line(&p_win[10].square, &p_win[11].square, &p_win[14].square, v);
	v += check_line(&p_win[11].square, &full, &p_win[15].square, v);
	v += check_line(&p_win[12].square, &p_win[13].square, &full, v);
	v += check_line(&p_win[13].square, &p_win[14].square, &full, v);
	v += check_line(&p_win[14].square, &p_win[15].square, &full, v);
	if (v == 15)
	{
		return (v);
	}
	return (0);
}
