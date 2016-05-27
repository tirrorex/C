/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:29:13 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 13:39:51 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

size_t			ft_putnbr_len(int n)
{
	char	*str;
	int		i;
	size_t	len;
	int		j;

	i = n;
	len = 1;
	str = NULL;
	while (i /= 10)
		++len;
	if (!(str = (char*)malloc(sizeof(char) * (len + (n < 0 ? 2 : 1)))))
		return (-1);
	if (n < 0)
	{
		str[0] = '-';
		ft_itoa_putnbr(&str[1], len - 1, n);
	}
	else
		ft_itoa_putnbr(str, len - 1, n);
	str[(n < 0 ? (len + 1) : len)] = '\0';
	ft_putstr(str);
	j = ft_strlen(str);
	free(str);
	return (j);
}
