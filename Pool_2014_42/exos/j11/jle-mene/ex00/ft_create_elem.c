/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 22:31:42 by jle-mene          #+#    #+#             */
/*   Updated: 2014/08/13 15:42:28 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*str;

	str = malloc(sizeof(t_list));
	if (str)
	{
		str->data = data;
		str->next = NULL;
	}
	return (str);
}
