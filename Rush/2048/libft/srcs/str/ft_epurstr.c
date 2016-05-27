/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 12:27:51 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 16:22:07 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*create_epur_str(char *s1, char *str, int i, int len)
{
	int		flag;
	int		j;

	flag = 1;
	j = 0;
	while (i < len)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (flag == 1)
				s1[j] = ' ';
			flag = 0;
		}
		else
		{
			flag = 1;
			s1[j] = str[i];
		}
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

char			*ft_epurstr(char *str)
{
	char	*s1;
	int		i;
	int		len;

	if (str)
	{
		len = ft_strlen(str);
		i = 0;
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
		while ((str[len - 1] == ' ' || str[len - 1] == '\t') && len > i)
			len--;
		if ((s1 = ft_strnew(len - i + 1)) == NULL)
			return (NULL);
		create_epur_str(s1, str, i, len);
		free(str);
		return (s1);
	}
	return (NULL);
}
