/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othassai <othassai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 17:12:57 by othassai          #+#    #+#             */
/*   Updated: 2014/08/10 22:31:10 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

void	ft_aff(int **tab)
{
	int		x;
	int		y;
	char	tmp;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			tmp = tab[y][x++] + '0';
			write(1, &tmp, 1);
			if (x < 9)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		y++;
	}
}

int		**ft_chartoint(char **argv)
{
	int		x;
	int		y;
	int		**tab;

	y = 0;
	tab = (int **)malloc(sizeof(int *) * 9);
	while (y < 9)
		tab[y++] = malloc(sizeof(int) * 9);
	y = 1;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (argv[y][x] == '.')
				tab[y - 1][x] = 0;
			else
				tab[y - 1][x] = argv[y][x] - '0';
			x++;
		}
		y++;
	}
	return (tab);
}

int		ft_verif(int **sudo, int pos, int i)
{
	int		y;
	int		x;

	x = pos % 9;
	y = pos / 9;
	if (pos == 0)
		return (TRUE);
	if (sudo[y][x] != 0)
		return (ft_verif(sudo, pos - 1, 1));
	while (i <= 9)
	{
		if (ft_online(i, y, sudo) && ft_oncolumn(i, x, sudo))
			if (ft_onblock(i, y, x, sudo))
			{
				sudo[y][x] = i;
				if (ft_verif(sudo, pos - 1, 1))
					return (TRUE);
			}
		i++;
	}
	sudo[y][x] = 0;
	return (FALSE);
}
