/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 21:41:43 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/10 22:47:53 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_check_arg(char **av)
{
	int x;
	int y;

	y = 1;
	while (y <= 9)
	{
		x = 0;
		if (ft_strlen(av[y]) != 9)
			return (FALSE);
		while (x < 9)
		{
			if ((av[y][x] <= 48 || av[y][x] > 57) && av[y][x] != 46)
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}

int		ft_check_solution(char **av)
{
	int x;
	int y;
	int res;

	y = 1;
	res = 0;
	while (y <= 9)
	{
		x = 0;
		while (x < 9)
		{
			if (av[y][x] > 48 && av[y][x] <= 57)
				res++;
			x++;
		}
		y++;
	}
	if (res >= 17)
		return (TRUE);
	return (FALSE);
}

int		ft_check_map(char **av)
{
	int x;
	int y;
	int tmp;
	int **sudo;

	y = 0;
	sudo = ft_chartoint(av);
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			tmp = sudo[y][x];
			if (tmp > 0 && tmp <= 9)
			{
				if (!ft_online2(tmp, y, sudo) || !ft_oncolumn2(tmp, x, sudo))
					return (FALSE);
				else if (!ft_onblock2(tmp, y, x, sudo))
					return (FALSE);
			}
			x++;
		}
		y++;
	}
	return (TRUE);
}

int		ft_check(char **av)
{
	if (!ft_check_arg(av) || !ft_check_solution(av) || !ft_check_map(av))
		return (FALSE);
	return (TRUE);
}
