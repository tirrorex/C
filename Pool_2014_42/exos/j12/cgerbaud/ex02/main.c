/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 20:13:02 by cgerbaud          #+#    #+#             */
/*   Updated: 2014/08/14 23:21:59 by cgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"ft_tail.h"

static unsigned int	ft_atoi(const char *const str)
{
	unsigned int	iterator;
	unsigned int	returned_value;

	returned_value = 0;
	iterator = -1;
	while (str[++iterator] && str[iterator] >= '0' && str[iterator] <= '9')
	{
		returned_value *= 10;
		returned_value += str[iterator] - '0';
	}
	return (returned_value);
}

int					main(const int ac, const char *const *const av)
{
	unsigned int	number;
	unsigned int	carg;

	if (ac < 4 || av[1][0] != '-' || av[1][1] != 'c' ||
		(number = ft_atoi(av[2])) == 0)
	{
		write(1, "Usage: ./ft_tail -c positive_number file [file ...]\n", 52);
		return (0);
	}
	carg = 2;
	while (++carg < (unsigned)ac)
	{
		ft_tail(av[carg], number, (!(ac == 4)));
		if (carg + 1 != (unsigned)ac)
			write(1, "\n", 1);
	}
	return (0);
}
