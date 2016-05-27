/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 11:36:59 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/23 12:57:27 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

int			main(void)
{
	int		*tab1[10];
	int		*tab2[10];
	int		i;

	i = 0;
	while (i < 9)
	{
		tab1[i] = (int*)malloc(sizeof(int*) * 1);
		tab2[i] = (int*)malloc(sizeof(int*) * 1);
		*tab1[i] = 13;
		*tab2[i] = 69;
		i++;
	}
	tab1[i] = NULL;
	tab2[i] = NULL;
	ft_reverse(tab1, tab2);
	ft_printf("%d\n", *tab1[5]);
	ft_printf("%d\n", *tab2[5]);
	return(0);
}
