/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:30:13 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:48:58 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*p;
	const char		*p2;

	if (dst && src && n)
	{
		p = dst;
		p2 = src;
		while (n-- != 0)
		{
			*p++ = *p2;
			if (*p2 == (char)c)
				return (p);
			p2++;
		}
	}
	return (NULL);
}
