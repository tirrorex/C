/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:27:53 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:52:58 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len2;

	i = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1);
		len2 = ft_strlen(s2);
		if (n > len)
			n = len + 1;
		if (n > len2)
			n = len2 + 1;
		while (s1[i] == s2[i] && i < n)
			i++;
		if (i == n)
			return (1);
		else
			return (0);
	}
	return (0);
}
