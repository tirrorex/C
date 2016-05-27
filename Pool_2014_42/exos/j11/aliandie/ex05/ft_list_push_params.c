/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 19:20:23 by tgre              #+#    #+#             */
/*   Updated: 2014/08/13 22:19:31 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*ptr;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	ptr = ft_create_elem(data);
	if (ptr == NULL)
		return ;
	ptr->next = *begin_list;
	*begin_list = ptr;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*ptr;

	ptr = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&ptr, av[i]);
		i++;
	}
	return (ptr);
}
