/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:28:52 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 12:18:53 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
