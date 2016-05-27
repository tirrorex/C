/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 18:52:44 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 13:39:27 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		option_is_valid(const char *format, int i)
{
	if (format[i] == 'd' || format[i] == 'i' || format[i] == 'c' ||
		format[i] == 's')
	{
		return (1);
	}
	else
		return (0);
}

static int		ft_print_all(const char *format, va_list ap, int i, int flag)
{
	while (format[++i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			flag++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar('%');
			flag--;
			i++;
		}
		else if (format[i] == '%' && option_is_valid(format, (i + 1)) == 1)
		{
			i++;
			flag += ft_printf_print_arg(format, ap, i);
		}
		else
		{
			i++;
			flag = (-1);
		}
	}
	return (flag);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			flag;

	i = -1;
	flag = 0;
	if (!format)
		return (EXIT_FAILURE);
	va_start(ap, format);
	flag = ft_print_all(format, ap, i, flag);
	va_end(ap);
	return (flag);
}
