/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 16:12:22 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/12 15:11:07 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char			*ft_getenv(char **env, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && str[j] && env[i][j] == str[j])
		{
			j++;
			if (env[i][j] == '=')
				return (&env[i][j + 1]);
		}
		i++;
	}
	return (NULL);
}

static char		*search_dir(char *path, char *command)
{
	int		i;

	path = ft_strjoin(path, "/");
	path = ft_strjoin(path, command);
	i = access(path, F_OK);
	if (i == -1)
		return (NULL);
	else
		return (path);
}

char			*search_path(char *command, char **env)
{
	int		i;
	char	*path;
	char	**tmp;

	tmp = ft_strsplit(ft_getenv(env, "PATH"), ':');
	path = NULL;
	i = -1;
	while (tmp[++i])
	{
		if ((path = search_dir(tmp[i], command)))
			break ;
	}
	ft_tabdel(tmp);
	return (path);
}
