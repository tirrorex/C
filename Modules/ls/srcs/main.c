/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:34:40 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/03 22:49:45 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_ls.h"
#include <stdio.h>

int			main(void)
{
	DIR		*rep;
	t_dirent	*entry;
	//t_stat		ret;

	rep = NULL;
	entry = NULL;
	rep = opendir(CURRENT_DIR);
	while ((entry = readdir(rep)) != NULL)
	{
	//stat(entry->d_name, &ret);
	//printf("%o\n", ret.st_uid);
	ft_putstr("Le fichier lu s'appelle ");
	ft_putendl(entry->d_name);
	}
	if (closedir(rep) == -1)
		exit(-1);
	return (EXIT_SUCCESS);
}
