/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_setenv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 19:26:19 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/18 11:29:16 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void			change_env(char **env, char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && s1[j] && env[i][j] == s1[j])
		{
			j++;
			if (env[i][j] == '=')
				env[i] = ft_strjoin(ft_strsub(env[i], 0, (j + 1)), s2);
		}
		i++;
	}
}

void			set_setenv(char **av, char ***env)
{
	char	*str;

	if (ft_tablen(av) == 3)
	{
		if (ft_getenv(*env, av[1]) == NULL)
		{
			str = ft_strjoin(av[1], "=");
			str = ft_strjoin(str, av[2]);
			*env = ft_tabjoin(*env, str);
		}
		else
			change_env(*env, av[1], av[2]);
	}
	else if (ft_tablen(av) > 3)
		error(TOOMUCHARG, NULL);
	else
		error(TOOFEWARG, NULL);
}
