/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:47:21 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/11 21:08:31 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_strlen(const char *s)
{
	size_t		cpt;

	cpt = 0;
	while (s[cpt])
		cpt++;
	return (cpt);
}
