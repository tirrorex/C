/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:12:27 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/24 17:12:31 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static void		reset_term(t_data *data)
{
	tcgetattr(0, &(data->term));
	data->term.c_lflag |= (ICANON | ECHO);
	tcsetattr(0, 0, &(data->term));
	FT_PUT_CMD("te");
	FT_PUT_CMD("ve");
}

static void		create_elem(t_pile *pile, char *arg)
{
	t_elem		*elem;

	if (pile)
	{
		elem = (t_elem*)malloc(sizeof(t_elem));
		if (elem)
		{
			elem->content = arg;
			elem->up = NULL;
			elem->reverse = 0;
			elem->underline = 0;
			if (!pile->tail)
			{
				elem->down = NULL;
				pile->head = elem;
				pile->tail = elem;
			}
			else
			{
				pile->tail->down = elem;
				elem->up = pile->tail;
				pile->tail = elem;
			}
			pile->length++;
		}
	}
}

static t_pile			*create_pile(void)
{
	t_pile		*pile;

	pile = (t_pile*)malloc(sizeof(t_pile));
	if (pile)
	{
		pile->length = 0;
		pile->head = NULL;
		pile->tail = NULL;
	}
	return (pile);
}

static void		init_data(char **av, t_data *data)
{
	int		i;

	i = 1;
	tcgetattr(0, &(data->term));
	data->term.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(0, TCSADRAIN, &(data->term));
	FT_PUT_CMD("ti");
	FT_PUT_CMD("vi");
	data->pile = create_pile();
	while (av[i])
		create_elem(data->pile, av[i++]);
}

int				main(int ac, char **av)
{
	t_data		data;

	if (ac == 1)
		return (error(USAGE));
	if (tgetent(NULL, getenv("TERM")) < 1)
		return (error(NOENV));
	init_data(av, &data);
	ft_select(&data);
	reset_term(&data);
	return (0);
}