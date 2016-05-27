/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:33:25 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:46:37 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		total;
	int		sign;

	sign = 1;
	total = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\f'
			|| *str == '\v' || *str == '\n')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + (*str - '0');
		str++;
	}
	total = total * sign;
	return (total);
}
