/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 18:52:44 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/17 17:03:41 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char			*ft_parse_string(const char *format, va_list ap, int i)
{
	char		str[0x400000];
	t_flags		flags;
	int			cpt_buff;

	cpt_buff = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			reset_flags(&flags);
			while(g_flags[(format[i])] != NULL)
			{
				i += g_flags[([format[i]])](&flags, format + i, ap) - 1;
				cpt_buff += g_convs[](ap, &flags, str + cpt_buff) + 1;
			}
		}
		else
			str[cpt_buff++] = format[i];
	}
	return (str);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			flag;
	char		*str;

	i = -1;
	if (!format)
		return (EXIT_FAILURE);
	va_start(ap, format);
	str = ft_parse_string(format, ap, i);
	ft_putstr(str);
	flag = ft_strlen(str);
	va_end(ap);
	return (flag);
}
