/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:55:57 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 17:08:54 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_tabcpy(char **str)
{
	char	**tab;
	int		i;

	if (str)
	{
		tab = (char**)malloc(sizeof(char*) * (ft_tablen(str) + 1));
		if (!tab)
			return (NULL);
		i = 0;
		while (str[i])
		{
			tab[i] = ft_strdup(str[i]);
			i++;
		}
		tab[i] = 0;
		return (tab);
	}
	return (NULL);
}
