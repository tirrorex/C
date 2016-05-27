/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:34:40 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:12:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_option		set_option(int ac, char **av)
{
	t_option	option;
	int			i;

	option.v = 0;
	option.s = 0;
	option.start = 1;
	option.size = 0;
	i = 1;
	while (i < ac && av[i][0] == '-')
	{
		if ((!(ft_strchr(av[i], 'v'))) && (!(ft_strchr(av[i], 's'))))
			return (option);
		if ((ft_strchr(av[i], 'v')))
			option.v = 1;
		if ((ft_strchr(av[i], 's')))
			option.s = 1;
		option.start++;
		i++;
	}
	return (option);
}

int					main(int ac, char **av)
{
	t_pile		*pile1;
	t_pile		*pile2;
	t_option	option;

	if (ac == 1)
		exit(1);
	option = set_option(ac, av);
	if ((check_param(av, option.start)) == -1)
		error_pushswap(1);
	pile1 = NULL;
	pile2 = NULL;
	pile1 = create_pile();
	pile2 = create_pile();
	pile_push(&pile1, av, option.start);
	ft_push_swap(&pile1, &pile2, &option);
	pile_del(&pile1);
	pile_del(&pile2);
	return (0);
}
