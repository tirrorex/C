/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 16:06:03 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/12 15:04:13 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void	error(int i, char *arg)
{
	if (i == 1)
		ft_printf("sh1: command not found: %s", arg);
	if (i == 2)
	{
		ft_printf("sh1: fork fail");
		exit(1);
	}
	if (i == 3)
	{
		ft_printf("sh1: env: environnement is empty.\n");
		exit(1);
	}
	if (i == 4)
		ft_printf("sh1: no such file or directory: %s", arg);
	if (i == 5)
		ft_printf("sh1: invalid path");
	if (i == 6)
		ft_printf("sh1: too many arguments.");
	if (i == 7)
		ft_printf("sh1: too few arguments.");
}
