/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:29:13 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/17 14:41:39 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_itoa_putnbr(char *str, size_t pos, int n)
{
	if (n >= 10 || n <= -10)
	{
		if (n > 0)
			str[pos] = (n % 10) + '0';
		else
			str[pos] = -(n % 10) + '0';
		ft_itoa_putnbr(str, pos - 1, n / 10);
	}
	else
	{
		if (n > 0)
			str[pos] = n + '0';
		else
			str[pos] = -n + '0';
	}
}

void			ft_putnbr(int n)
{
	char	*str;
	int		i;
	size_t	len;

	i = n;
	len = 1;
	str = NULL;
	while (i /= 10)
		++len;
	str = (char*)malloc(sizeof(char) * (len + (n < 0 ? 2 : 1)));
	if (n < 0)
	{
		str[0] = '-';
		ft_itoa_putnbr(&str[1], len - 1, n);
	}
	else
		ft_itoa_putnbr(str, len - 1, n);
	if (n < 0)
		str[len + 1] = '\0';
	else
		str[len] = '\0';
	ft_putstr(str);
	free(str);
}
