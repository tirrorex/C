/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcecchin <gcecchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 11:40:53 by gcecchin          #+#    #+#             */
/*   Updated: 2014/08/15 17:07:38 by gcecchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	(*door).state = CLOSE;
}

t_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return ((*door).state);
}

t_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (!(*door).state);
}

void		open_door(t_door *door)
{
	ft_putstr("Door is opening...\n");
	(*door).state = OPEN;
}
