/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:30:00 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:49:21 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*a;
	const char		*b;
	unsigned int	i;

	a = (char*)dst;
	b = (const char*)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
