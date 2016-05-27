/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 15:41:44 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:07:30 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int		check_digit(char **av, int i)
{
	int		j;

	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((ft_isdigit(av[i][j])) == 0 && av[i][j] != '-')
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

static int		check_int_size(char **av, int i)
{
	while (av[i])
	{
		if ((ft_strlen(av[i])) > 12)
			return (-1);
		else if (ft_atol(av[i]) < -2147483648)
			return (-1);
		else if (ft_atol(av[i]) > 2147483647)
			return (-1);
		i++;
	}
	return (0);
}

static int		check_is_double(char **av, int i)
{
	while (av[i])
	{
		if (av[i + 1])
			if ((ft_strcmp(av[i], av[i + 1])) == 0)
				return (-1);
		i++;
	}
	return (0);
}

int				check_param(char **av, int start)
{
	if ((check_digit(av, start)) == -1)
		return (-1);
	if ((check_int_size(av, start)) == -1)
		return (-1);
	if ((check_is_double(av, start)) == -1)
		return (-1);
	return (0);
}
