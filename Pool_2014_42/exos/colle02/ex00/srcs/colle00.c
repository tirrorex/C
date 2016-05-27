/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 18:53:33 by vroche            #+#    #+#             */
/*   Updated: 2014/08/17 18:53:36 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*firstline00(int x, int y, char *tab)
{
	int i;
	int	z;

	i = 0;
	if (x >= 1 && y >= 1)
	{
		tab[i++] = 'o';
		z = 1;
		while (z <= (x - 2))
		{
			tab[i++] = ('-');
			z++;
		}
		if (x > 1)
		{
			tab[i++] = 'o';
		}
		tab[i++] = ('\n');
	}
	return (&tab[i]);
}

char	*interlines00(int x, int y, char *tab, int i)
{
	int linter;
	int v;

	if ((x >= 1 && y > 2))
	{
		linter = 1;
		while (linter <= (y - 2))
		{
			tab[i++] = '|';
			v = 1;
			while (v <= (x - 2))
			{
				tab[i++] = ' ';
				v++;
			}
			if (x > 1)
			{
				tab[i++] = '|';
			}
			tab[i++] = '\n';
			linter++;
		}
	}
	return (&tab[i]);
}

char	*lastline00(int x, int y, char *tab)
{
	int z;
	int i;

	i = 0;
	if (x >= 1 && y > 1)
	{
		tab[i++] = 'o';
		z = 1;
		while (z <= (x - 2))
		{
			tab[i++] = '-';
			z++;
		}
		if (x > 1)
		{
			tab[i++] = 'o';
		}
		tab[i++] = '\n';
		tab[i++] = '\0';
	}
	return (&tab[i]);
}

char	*colle00(int x, int y, char *tab)
{
	char	*tmp;

	tmp = firstline00(x, y, tab);
	tmp = interlines00(x, y, tmp, 0);
	lastline00(x, y, tmp);
	return (tab);
}
