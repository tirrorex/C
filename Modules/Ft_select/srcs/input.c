/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 14:30:00 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/26 14:30:01 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"


/*static int		is_space(char *key)
{
		if (key[0] == ' ' && key[1] == 0 && key[2] == 0 && key[3] == 0)
		{

		}
		return (0);
}


static int		is_enter(char *key)
{
		if (key[0] == '\n' && key[1] == 0 && key[2] == 0 && key[3] == 0)
		{

		}
}

static int		is_del(char *key)
{
		if ((key[0] == 27 && key[1] == '[' && key[2] == '3' && key[3] == '~')
		|| (key[0] == 127 && key[1] == 0 && key[2] == 0 && key [3] == 0))
		{

		}
}
*/
int		is_escape(char *key)
{
	if (key[0] == 27 && key[1] == 0 && key[2] == 0 && key[3] == 0)
		return (1);
	return (0);
}

