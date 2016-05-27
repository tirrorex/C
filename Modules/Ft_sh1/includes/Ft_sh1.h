/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 18:28:40 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/10 18:28:42 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH1_H
# define FT_SH1_H

# include <stdlib.h>
# include <sys/types.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/param.h>
# include <fcntl.h>
# include <libft.h>
# include <signal.h>

# define CURRENT_DIR		"."
# define BUILTIN			"cd setenv unsetenv env exit"
# define NB_BUILTINS		5
# define BAD_COMMAND		1
# define FORK_FAIL			2
# define NOENV				3
# define WRONG_PATH			4
# define INVPATH			5
# define TOOMUCHARG			6
# define TOOFEWARG			7

typedef struct dirent		t_dirent;
typedef void	(t_parser)(char **, char **);
typedef struct				s_builtin
{
	char					*name;
	t_parser				*builtin;
}							t_builtin;

int							prompt(char ***env);
void						set_builtins(t_builtin *builtins);
void						builtin(char **av, char ***env,
	t_builtin *builtins);
char						*search_path(char *command, char **env);
void						set_cd(char **av, char ***env);
void						set_env(char **av, char **env);
void						set_setenv(char **av, char ***env);
void						set_unsetenv(char **av, char **env);
void						set_exit(char **av, char **env);
void						error(int i, char *arg);
char						*ft_getenv(char **env, char *str);
void						change_env(char **env, char *s1, char *s2);

#endif
