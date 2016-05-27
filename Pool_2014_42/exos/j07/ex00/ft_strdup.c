/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/08 14:28:37 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/09 17:36:33 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		src_size;
	int		cpt;

	cpt = 0;
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	str = (char*)malloc(sizeof(*str) * (src_size));
	while (cpt < src_size)
	{
		str[cpt] = src[cpt];
		cpt++;
	}
	str[src_size] = '\0';
	return (str);
}
