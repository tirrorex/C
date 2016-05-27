/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 20:07:30 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 11:53:24 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static void		command_handle(char **av, char **env)
{
	pid_t		pid;

	pid = fork();
	if (pid == 0)
	{
		if ((av[0][0] == '/') || av[0][0] == '.')
			execve(av[0], av, env);
		else
			execve(search_path(av[0], env), av, env);
		error(BAD_COMMAND, av[0]);
		ft_tabdel(av);
		exit(1);
	}
	else
	{
		if (waitpid(pid, NULL, 0) != pid)
			error(FORK_FAIL, NULL);
		ft_tabdel(av);
	}
}

static int		test_isspace(char *str)
{
	int			i;
	int			flag;

	i = 0;
	flag = 1;
	while (str[i])
		if ((flag = (ft_isspace(str[i++]))) == 0)
			break ;
	return (flag);
}

static void		command_execute(char *line, char ***env, t_builtin *builtins)
{
	char		**av;

	line = ft_epurstr(line);
	av = ft_strsplit(line, ' ');
	ft_strdel(&line);
	if (ft_strstr(BUILTIN, av[0]))
		builtin(av, env, builtins);
	else
		command_handle(av, *env);
	ft_printf("\n");
}

static void		signalhandler(int i)
{
	if (i == 2)
		ft_printf("\n$> ");
}

int				prompt(char ***env)
{
	char		*line;
	t_builtin	builtins[NB_BUILTINS];

	set_builtins(builtins);
	ft_printf("$> ");
	signal(SIGINT, signalhandler);
	while (get_next_line(0, &line))
	{
		signal(SIGINT, signalhandler);
		if (line && *line && !test_isspace(line))
			command_execute(line, env, builtins);
		ft_printf("$> ");
	}
	return (1);
}
