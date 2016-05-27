/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:34:40 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/29 22:02:00 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_ls.h"
#include "ft_error.h"

t_data		*ft_eval_options(char *str, t_data *data)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (str[i])
	{
		if (ft_strchr(OPTS, str[i]))
		{
			if (ft_strchr(data->opts, str[i]) == NULL)
			{
				data->opts[j] = str[i];
				j++;
			}
		}
		else
			ft_error(ILLEGAL_OPTION, OPT_ERROR, &str[i], TRUE);
		i++;
	}
	return (data);
}

t_data		*ft_parse_entry(int ac, char **av)
{
	t_data		*data;
	int			cpt;
	int			i;

	i = 0;
	cpt = 1;
	while (cpt < ac && av[cpt][0] == '-' && av[cpt][1] != '\0')
		cpt++;
	if (!(data = ft_create_data(ac - cpt)))
		ft_error(NOT_ENOUGH_MEM, STR_ERROR, "", TRUE);
	cpt = 1;
	while (cpt < ac && av[cpt][0] == '-' && av[cpt][1] != '\0')
	{
		data = ft_eval_options(av[cpt], data);
		cpt++;
	}
	while (cpt < ac)
	{
		data->params[i] = ft_strdup(av[cpt]);
		cpt++;
		i++;
	}
	return (data);
}

int			main(int ac, char **av)
{
	t_data		*data;

	data = ft_parse_entry(ac, av);
	//ft_ls(data);
	if (data)
		ft_data_del(data);
	return (EXIT_SUCCESS);
}
