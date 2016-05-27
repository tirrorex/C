/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:28:33 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:51:57 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		test_space(const char *s1, const char *s2)
{
	int		len;

	len = 0;
	if (s1)
		len = ft_strlen(s1);
	if (s2)
		len = len + ft_strlen(s2);
	return (len);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 || s2)
	{
		str = (char*)malloc(sizeof(char) * (test_space(s1, s2) + 1));
		if (str == NULL)
			return (NULL);
		i = 0;
		j = 0;
		while (s1 && s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2 && s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
		str[i + j] = '\0';
		return (str);
	}
	return (NULL);
}
