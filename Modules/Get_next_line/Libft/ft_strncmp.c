/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:33:17 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:52:45 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	if (s1 && s2)
	{
		i = 0;
		while (n > 0)
		{
			if (s1[i] != s2[i])
				return ((*(unsigned char*)s1 < *(unsigned char *)s2) ? -1 : +1);
			else if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
			n--;
		}
	}
	return (0);
}
