/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 16:16:48 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:50:46 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	if (size == 0 && ptr)
	{
		new = ft_memalloc(sizeof(char));
	}
	else if ((new = ft_memalloc(size)) == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		ft_memdel((void*)&ptr);
		return (new);
	}
	ft_memcpy(new, ptr, (size) ? size : sizeof(char));
	ft_memdel((void*)&ptr);
	return (new);
}
