/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:27:23 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:52:20 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	int		len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = ft_strnew(len + 1);
		str = ft_strncpy(str, s, len);
		while (str[i])
		{
			str[i] = f(str[i]);
			i++;
		}
		return (str);
	}
	return (0);
}
