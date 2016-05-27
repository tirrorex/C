/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 19:39:30 by mgras             #+#    #+#             */
/*   Updated: 2014/08/13 19:45:57 by mgras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}
