/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 19:26:04 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/18 11:28:36 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void		set_cd(char **av, char ***env)
{
	if (ft_tablen((void*)av) > 2)
		error(INVPATH, NULL);
	else if (ft_tablen((void*)av) == 2)
	{
		if (chdir(av[1]) == -1)
			error(WRONG_PATH, av[1]);
		else
		{
			change_env(*env, "OLDPWD", ft_getenv(*env, "PWD"));
			change_env(*env, "PWD", ft_strjoin(ft_strjoin(ft_getenv(*env,
				"PWD"), "/"), av[1]));
		}
	}
	else
		chdir(ft_getenv(*env, "HOME"));
}
