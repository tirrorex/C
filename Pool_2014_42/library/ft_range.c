/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 20:09:23 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/18 19:55:07 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int*)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
