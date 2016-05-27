/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/13 16:40:30 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/13 16:40:33 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*static void		reinit(void)
{
	FT_PUT_CMD("te");
	FT_PUT_CMD("ti");
	FT_PUT_CMD("cl");

}*/

int				ft_select(t_data *data)
{
	char		key[4] = {0};

	while (42)
	{
		//reinit();
		//display(data);
		(void)data;
		signal_handling();
		key [0] = key [1] = key[2] = key[3] = 0;
		read(0, key, 4);
		if (is_escape(key))
			break;
		if (is_up(key))
			continue;
		if (is_up(key))
			continue;
		if (is_down(key))
			continue;
		if (is_left(key))
			continue;
		if (is_right(key))
			continue;
	}
	return (0);
}