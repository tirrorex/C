/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:32:57 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:53:36 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int		len;
	int					j;

	len = ft_strlen(s2);
	j = 0;
	if (len == 0)
		return ((char*)s1);
	else if (ft_strlen(s1) < len)
		return (NULL);
	while (s1[j + len - 1])
	{
		if (ft_memcmp(s1 + j, s2, len) == 0)
			return ((char*)s1 + j);
		j++;
	}
	return (NULL);
}
