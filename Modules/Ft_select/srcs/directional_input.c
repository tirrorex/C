/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directional_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 16:42:42 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/26 16:42:44 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		is_up(char *key)
{
	if (key[0] == 27 && key[1] == '[' && key[2] == 'A' && key[3] == 0)
	{
		return (0);
	}
	return (0);
}

int		is_down(char *key)
{
	if (key[0] == 27 && key[1] == '[' && key[2] == 'B' && key[3] == 0)
	{
		return (0);
	}
	return (0);

}

int		is_right(char *key)
{
	if (key[0] == 27 && key[1] == '[' && key[2] == 'C' && key[3] == 0)
	{
		return (0);
	}
	return (0);

}

int		is_left(char *key)
{
	if (key[0] == 27 && key[1] == '[' && key[2] == 'D' && key[3] == 0)
	{
		return (0);
	}
	return (0);

}