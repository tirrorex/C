/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 23:00:16 by jle-mene          #+#    #+#             */
/*   Updated: 2014/08/13 17:49:37 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if ((*begin_list) == NULL)
		(*begin_list) = ft_create_elem(data);
	else if ((*begin_list)->next == NULL)
		(*begin_list)->next = ft_create_elem(data);
	else
	{
		ft_list_push_back(&((*begin_list)->next), data);
	}
}
