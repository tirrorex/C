/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:28:52 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:53:55 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(char s)
{
	if (s == ' ' || s == '\n' || s == '\t' || s == ',')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (s)
	{
		len = ft_strlen(s) - 1;
		i = 0;
		while (ft_isspace(s[i]) == 1 && s[i] != '\0')
			i++;
		while (ft_isspace(s[len]) == 1 && len > i)
			len--;
		len = len - i + 1;
		return (str = ft_strsub(s, i, len));
	}
	return (NULL);
}
