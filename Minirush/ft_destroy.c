/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 11:27:57 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/23 12:57:24 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

void		ft_destroy(int **tab, size_t nb_champ)
{
	if (tab && *tab)
	{
		while (--nb_champ)
		{
			free(tab[nb_champ]);
			tab[nb_champ] = NULL;
		}
	}
}

void		ft_reverse(int **tab1, int **tab2)
{
	int		i;

	i = 0;
	if (tab1 && tab2 && *tab1 && *tab2)
	{
		while (tab1[i] && tab2[i])
		{
			ft_swap_int(tab1[i], tab2[i]);
			i++;
		}
	}
}
