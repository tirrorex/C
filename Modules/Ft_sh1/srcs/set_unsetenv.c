/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_unsetenv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 19:26:28 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/12 15:09:58 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void		set_unsetenv(char **av, char **env)
{
	int		i;
	int		k;

	if (ft_tablen(av) == 2)
	{
		if (ft_getenv(env, av[1]))
		{
			while (env[i])
			{
				k = ft_strncmp(env[i], av[1], ft_strlen(av[1]));
				if (k == 0)
					ft_tabdel_array(env, i);
				i++;
			}
		}
	}
	else if (ft_tablen(av) > 2)
		error(TOOMUCHARG, NULL);
	else
		error(TOOFEWARG, NULL);
}
