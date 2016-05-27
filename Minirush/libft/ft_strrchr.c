/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:32:49 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:53:18 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	i = ft_strlen(s);
	a = (char)c;
	while (i >= 0 && s[i] != a)
	{
		i--;
	}
	if (s[i] == a)
		return ((char*)(s + i));
	else
		return (NULL);
}
