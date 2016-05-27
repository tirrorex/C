/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 16:19:03 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 18:55:12 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_tabjoin(char **tab, char const *s)
{
	char	**str;
	int		i;

	if (*tab && tab && s)
	{
		str = (char**)malloc(sizeof(char*) * (ft_tablen(tab) + 2));
		if (str == NULL)
			return (NULL);
		i = 0;
		while (tab[i])
		{
			str[i] = ft_strdup(tab[i]);
			i++;
		}
		str[i] = ft_strdup(s);
		i++;
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
