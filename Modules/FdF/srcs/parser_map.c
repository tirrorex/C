/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 16:38:20 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 18:04:41 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static char		**tab_malloc(int len)
{
	char				**tab;

	if (!(tab = (char**)malloc(sizeof(char*) * len)))
		exit(-1);
	return (tab);
}

static char		*cell_malloc(void)
{
	char				*tab;

	if (!(tab = (char*)malloc(sizeof(char) * 50)))
		exit(-1);
	return (tab);
}

static void		init_split(t_split *split)
{
	split->i = 0;
	split->j = 0;
	split->k = 0;
	split->tab = NULL;
}

static char		**fdfsplit(char *str)
{
	t_split				split;

	init_split(&split);
	split.tab = tab_malloc(ft_strlen(str));
	while (str[split.i])
	{
		if (str[split.i] != ' ')
		{
			if (split.k == 0)
				split.tab[split.j] = cell_malloc();
			split.tab[split.j][split.k] = str[split.i];
			if (str[split.i + 1] != ' ' && str[split.i + 1] != '\0' &&
					str[split.i + 1] != '\n')
				split.k++;
			else
			{
				split.tab[split.j][split.k + 1] = '\0';
				split.j++;
				split.k = 0;
			}
		}
		split.i++;
	}
	split.tab[split.j] = 0;
	return (split.tab);
}

t_2d			*parser_map(t_list *lst)
{
	t_2d				*coord2d;
	t_parser			parser;

	parser.tmp = NULL;
	parser.len = ft_lstlen(lst);
	coord2d = coord2d_malloc((parser.len) * ft_strlen((char*)lst->content));
	parser.i = 0;
	parser.k = 0;
	while (parser.i < parser.len)
	{
		parser.tmp = fdfsplit(lst->content);
		parser.j = 0;
		while (parser.tmp[parser.j])
		{
			coord2d[parser.k] = convert_into_2d(parser.j, parser.i,
					ft_atoi(parser.tmp[parser.j]), ft_tablen(parser.tmp));
			coord2d[parser.k].ylen = parser.len;
			parser.k++;
			parser.j++;
		}
		lst = lst->next;
		parser.i++;
	}
	return (coord2d);
}
