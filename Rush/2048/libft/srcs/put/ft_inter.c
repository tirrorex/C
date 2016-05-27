/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:43:52 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/12 13:31:16 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_comp_char(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void			ft_inter(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s2);
	while (s1[i])
	{
		if (ft_comp_char(s1, s1[i], i) == 1)
		{
			if (ft_comp_char(s2, s1[i], j) == 0)
				write(1, &s1[i], 1);
		}
		i++;
	}
}
