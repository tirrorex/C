/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 17:10:25 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 17:20:47 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		errorfdf(int n)
{
	if (n == 1)
		ft_printf("Fdf : error : map is not valid\n");
	else if (n == 2)
		ft_printf("Fdf : error : read fail\n");
	else if (n == 3)
		ft_printf("Fdf : error : too many arguments\n");
	exit(-1);
}

static void		checkmap_entry(void *tmp)
{
	int				i;
	char			*str;

	i = 0;
	str = NULL;
	str = (char*)tmp;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '\n' ||
				str[i] == '\0' || str[i] == ' ')
			i++;
		else
			errorfdf(1);
	}
}

static void		checkmap_isvalid(t_list *lst)
{
	while (lst)
	{
		checkmap_entry(lst->content);
		lst = lst->next;
	}
}

int				main(int ac, char **av)
{
	char		*line;
	t_arg		arg;
	int			ret;

	if (ac > 2)
		errorfdf(3);
	if (av[1])
	{
		arg.fd = open(av[1], O_RDONLY);
		arg.list = NULL;
		line = NULL;
		while ((ret = (get_next_line(arg.fd, &line))) == 1)
			ft_lstln_back(&arg.list, (void*)line, ft_strlen(line));
		if (ret == -1)
			errorfdf(2);
		if (arg.list == NULL)
			errorfdf(1);
		checkmap_isvalid(arg.list);
		trace_map(arg.list);
	}
	return (0);
}
