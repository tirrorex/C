/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 16:00:57 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:53:12 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		len1;
	size_t		len2;
	size_t		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (len1 < n)
		n = len1;
	if (len1 < len2)
		return (NULL);
	while (i + len2 <= n)
	{
		if (ft_strncmp((char*)s1 + i, s2, len2) == 0)
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}
