/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 00:08:05 by wyeo              #+#    #+#             */
/*   Updated: 2014/08/15 14:33:22 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i != NULL)
	{
		while (factory[i][j] != NULL)
		{
			free(factory[i][j]);
			j = j + 1;
		}
		free(factory[i]);
		i = i + 1;
	}
	free(factory);
}
