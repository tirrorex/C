/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 19:09:57 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/18 11:24:38 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static t_builtin		set_builtin(char *name, t_parser *env)
{
	t_builtin	builtin;

	builtin.name = name;
	builtin.builtin = env;
	return (builtin);
}

void					set_builtins(t_builtin *builtins)
{
	builtins[0].name = "cd";
	builtins[1].name = "setenv";
	builtins[2] = set_builtin("unsetenv", &set_unsetenv);
	builtins[3] = set_builtin("env", &set_env);
	builtins[4] = set_builtin("exit", &set_exit);
}

void					builtin(char **av, char ***env, t_builtin *builtins)
{
	int			i;

	i = 0;
	while (i < NB_BUILTINS)
	{
		if (ft_strcmp(builtins[i].name, av[0]) == 0)
		{
			if (ft_strcmp(av[0], "setenv") == 0)
				set_setenv(av, env);
			else if (ft_strcmp(av[0], "cd") == 0)
				set_cd(av, env);
			else
				builtins[i].builtin(av, *env);
			break ;
		}
		i++;
	}
}
