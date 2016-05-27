/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 17:08:26 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 18:21:54 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_tabtolst(char **tab)
{
	t_list		*list;
	int			i;

	i = 0;
	list = NULL;
	while (tab[i])
	{
		if (!ft_lstln_back(&list, tab[i], ft_strlen(tab[i])))
			return (NULL);
		i++;
	}
	if (tab)
		free(tab);
	return (list);
}
