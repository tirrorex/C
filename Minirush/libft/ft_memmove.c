/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:30:26 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:49:36 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tdst;

	if (dst && src)
	{
		if ((tdst = (void*)malloc(len)) == NULL)
			return (NULL);
		ft_memcpy(tdst, src, len);
		ft_memcpy(dst, tdst, len);
		free(tdst);
	}
	return (dst);
}
