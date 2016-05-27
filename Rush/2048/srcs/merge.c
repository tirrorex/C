/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 16:29:09 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/01 16:29:11 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void				merge_line2(int *a, int *b)
{
	if (*a == 0 && *b != 0)
	{
		*a = *b;
		*b = 0;
	}
	else if (*a != 0 && *a == *b)
	{
		*a += *b;
		*b = 0;
	}
}

static void				merge_line3(int *a, int *b, int *c)
{
	if (*a == 0)
	{
		*a = *b;
		*b = *c;
		*c = 0;
		merge_line2(a, b);
	}
	else if (*a != 0 && *b == 0)
	{
		*b = *c;
		*c = 0;
		merge_line2(a, b);
	}
	else if (*a != 0 && *b != 0 && *c == 0)
	{
		merge_line2(a, b);
	}
	else if (*a != 0 && *b != 0 && *c != 0)
	{
		merge_line2(a, b);
		merge_line2(b, c);
	}
}

void					merge_line(int *a, int *b, int *c, int *d)
{
	if (*a == 0)
	{
		*a = *b;
		*b = *c;
		*c = *d;
		*d = 0;
		merge_line3(a, b, c);
	}
	else if (*a != 0 && *b == 0)
	{
		*b = *c;
		*c = *d;
		*d = 0;
		merge_line3(a, b, c);
	}
	else if (*a != 0 && *b != 0 && *c == 0)
	{
		*c = *d;
		*d = 0;
		merge_line3(a, b, c);
	}
	merge_line2(a, b);
	merge_line3(b, c, d);
}
