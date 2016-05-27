/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:32:26 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:52:04 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		size_orig;

	if (dst && src)
	{
		size_orig = size;
		len_dst = ft_strlen(dst);
		len_src = ft_strlen(src);
		while (*dst && size)
		{
			dst++;
			size--;
		}
		if (!size)
			return (size_orig + len_src);
		while (*src && size-- > 1)
			*dst++ = *src++;
		*dst = '\0';
		return (len_dst + len_src);
	}
	return (0);
}
