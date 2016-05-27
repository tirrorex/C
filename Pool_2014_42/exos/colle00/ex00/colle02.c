/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 15:30:41 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/02 19:57:27 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle_x1(int y)
{
	int cpty;

	cpty = 1;
	while (cpty <= y)
	{
		if (cpty == 1)
			ft_putchar('A');
		else if (cpty == y)
			ft_putchar('C');
		else
			ft_putchar('B');
		ft_putchar('\n');
		cpty++;
	}
}

void	colle_y1(int x)
{
	int ctx;

	ctx = 1;
	while (ctx <= x)
	{
		if ((ctx == 1) || (ctx == x))
			ft_putchar('A');
		else
			ft_putchar('B');
		ctx++;
	}
	ft_putchar('\n');
}

void	colle_xy(int x, int y)
{
	int ctx;
	int cty;

	ctx = 1;
	cty = 1;
	while (cty <= y)
	{
		while (ctx <= x)
		{
			if (((ctx == 1) && (cty == 1)) || ((ctx == x) && (cty == 1)))
				ft_putchar('A');
			else if (((ctx == 1) && (cty == y)) || ((ctx == x) && (cty == y)))
				ft_putchar('C');
			else if ((ctx == 1) || (ctx == x))
				ft_putchar('B');
			else if ((cty == 1) || (cty == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			ctx++;
		}
		cty++;
		ctx = 1;
		ft_putchar('\n');
	}
}

void	colle00(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		if ((x == 1) && (y == 1))
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else if (x == 1)
			colle_x1(y);
		else if (y == 1)
			colle_y1(x);
		else
			colle_xy(x, y);
	}
}
