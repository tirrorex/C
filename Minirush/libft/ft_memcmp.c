/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:31:08 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:49:12 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	i = 0;
	p = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	while (i < n)
	{
		if (p[i] != p2[i])
			return (p[i] - p2[i]);
		i++;
	}
	return (0);
}
