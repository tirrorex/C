/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:31:45 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:52:51 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	len;

	if (dst && src)
	{
		len = ft_strlen(src);
		if (len < n)
		{
			dst = ft_memcpy(dst, src, len);
			while (len < n)
			{
				dst[len] = '\0';
				len++;
			}
		}
		else
			dst = ft_memcpy(dst, src, n);
		return (dst);
	}
	return (NULL);
}
