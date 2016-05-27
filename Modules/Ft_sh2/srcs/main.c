/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:34:40 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/06 16:45:13 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

int				main(int ac, char **av, char **env)
{
	char	**envcpy;

	if (ac != 1)
		return (-1);
	(void)av;
	if (!env || !*env)
		error(NOENV, NULL);
	if (!(envcpy = ft_tabcpy(env)))
		exit(1);
	prompt(&envcpy);
	return (0);
}
