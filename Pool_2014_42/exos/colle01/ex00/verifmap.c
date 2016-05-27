/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othassai <othassai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 21:43:18 by othassai          #+#    #+#             */
/*   Updated: 2014/08/10 22:54:05 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

int		ft_online2(int number, int y, int **sudo)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if (sudo[y][i] == number && ++j == 2)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int		ft_oncolumn2(int number, int x, int **sudo)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
		if (sudo[i++][x] == number && ++j == 2)
			return (FALSE);
	return (TRUE);
}

int		ft_onblock2(int number, int y, int x, int **sudo)
{
	int		starty;
	int		startx;
	int		j;

	starty = y - (y % 3);
	startx = x - (x % 3);
	y = starty;
	j = 0;
	while (y < starty + 3)
	{
		x = startx;
		while (x < startx + 3)
		{
			if (sudo[y][x] == number && ++j == 2)
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}
