/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othassai <othassai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 18:04:43 by othassai          #+#    #+#             */
/*   Updated: 2014/08/10 22:53:13 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

int		ft_online(int number, int y, int **sudo)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (sudo[y][i] == number)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int		ft_oncolumn(int number, int x, int **sudo)
{
	int		i;

	i = 0;
	while (i < 9)
		if (sudo[i++][x] == number)
			return (FALSE);
	return (TRUE);
}

int		ft_onblock(int number, int y, int x, int **sudo)
{
	int starty;
	int startx;

	starty = y - (y % 3);
	startx = x - (x % 3);
	y = starty;
	while (y < starty + 3)
	{
		x = startx;
		while (x < startx + 3)
		{
			if (sudo[y][x] == number)
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}

int		ft_resolve(int **sudo, int pos,int i)
{
	int		x;
	int		y;

	x = pos % 9;
	y = pos / 9;
	if (pos == 9 * 9)
		return (TRUE);
	else if (sudo[y][x] != 0)
		return (ft_resolve(sudo, pos + 1, 1));
	while (i <= 9)
	{
		if (ft_online(i, y, sudo) && ft_oncolumn(i, x, sudo))
			if (ft_onblock(i, y, x, sudo))
			{
				sudo[y][x] = i;
				if (ft_resolve(sudo, pos + 1, 1))
					return (TRUE);
			}
		i++;
	}
	sudo[y][x] = 0;
	return (FALSE);
}
