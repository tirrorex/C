/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:32:36 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/11 21:08:02 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	if (!s)
		return (NULL);
	a = (char)c;
	i = 0;
	while (s[i] && s[i] != a)
	{
		i++;
	}
	if (s[i] == a)
		return ((char*)(s + i));
	else
		return (NULL);
}
