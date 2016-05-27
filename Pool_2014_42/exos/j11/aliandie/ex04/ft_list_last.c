/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 22:07:46 by tgre              #+#    #+#             */
/*   Updated: 2014/08/13 22:22:14 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list **begin_list)
{
	t_list	*ptr;

	ptr = *begin_list;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
