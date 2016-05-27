/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 18:38:05 by mgras             #+#    #+#             */
/*   Updated: 2014/08/13 18:58:08 by mgras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = begin_list;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
