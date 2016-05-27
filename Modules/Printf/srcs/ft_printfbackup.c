/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 18:52:44 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/12 20:38:27 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_printf_parse(const char *format, va_list ap, int i)
{
	var_data	var;
	int			cpt;

	if (format[i] == '%')
		i++;
	if (format[i] == 's')
	{
		var.c = va_arg(ap, char *);
		ft_putstr(var.c);
		cpt = ft_strlen(var.c);
	}
	else if (format[i] == 'd')
	{
		var.a = va_arg(ap, int);
		cpt = ft_putnbr_len(var.a);
	}
	while (format[++i])
		ft_putchar(format[i]);
	va_end(ap);
	i += cpt;
	return (i);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;

	if (!format)
		return (EXIT_FAILURE);
	va_start(ap, format);
	i = 0;
	if (ft_strchr(format, '%'))
	{
		while (i < ft_strclen((char*)format, '%'))
		{
			ft_putchar(format[i]);
			i++;
		}
		i = ft_printf_parse(format, ap, i);
	}
	else
	{
		ft_putstr(format);
		i = ft_strlen(format);
	}
	va_end(ap);
	return (i);
}
