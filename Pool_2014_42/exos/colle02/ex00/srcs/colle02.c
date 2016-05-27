/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 18:54:01 by vroche            #+#    #+#             */
/*   Updated: 2014/08/17 19:08:19 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*firstline02(int x, int y, char *tab)
{
	int i;
	int	z;

	i = 0;
	if (x >= 1 && y >= 1)
	{
		tab[i++] = 'A';
		z = 1;
		while (z <= (x - 2))
		{
			tab[i++] = ('B');
			z++;
		}
		if (x > 1)
		{
			tab[i++] = 'A';
		}
		tab[i++] = ('\n');
	}
	return (&tab[i]);
}

char	*interlines02(int x, int y, char *tab, int i)
{
	int linter;
	int v;

	if ((x >= 1 && y > 2))
	{
		linter = 1;
		while (linter <= (y - 2))
		{
			tab[i++] = 'B';
			v = 1;
			while (v <= (x - 2))
			{
				tab[i++] = ' ';
				v++;
			}
			if (x > 1)
			{
				tab[i++] = 'B';
			}
			tab[i++] = '\n';
			linter++;
		}
	}
	return (&tab[i]);
}

char	*lastline02(int x, int y, char *tab)
{
	int z;
	int i;

	i = 0;
	if (x >= 1 && y > 1)
	{
		tab[i++] = 'C';
		z = 1;
		while (z <= (x - 2))
		{
			tab[i++] = 'B';
			z++;
		}
		if (x > 1)
		{
			tab[i++] = 'C';
		}
		tab[i++] = '\n';
		tab[i++] = '\0';
	}
	return (&tab[i]);
}

char	*colle02(int x, int y, char *tab)
{
	char	*tmp;

	tmp = firstline02(x, y, tab);
	tmp = interlines02(x, y, tmp, 0);
	lastline02(x, y, tmp);
	return (tab);
}
