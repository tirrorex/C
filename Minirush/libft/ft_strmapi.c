/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:27:34 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:52:31 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	int				len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = ft_strnew(len + 1);
		str = ft_strncpy(str, s, len);
		while (str[i])
		{
			str[i] = f(i, str[i]);
			i++;
		}
		return (str);
	}
	return (0);
}
