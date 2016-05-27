/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 12:04:24 by mgras             #+#    #+#             */
/*   Updated: 2014/08/13 18:26:27 by mgras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	element = (t_list*)malloc (sizeof(t_list));
	if (element)
	{
		element->next = NULL;
		element->data = data;
	}
	return (element);
}
