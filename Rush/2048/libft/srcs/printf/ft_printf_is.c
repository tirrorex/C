/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_is.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 16:21:19 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/21 13:40:14 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_printf_is_char(char c, va_list ap)
{
	int		i;
	t_var	arg;

	i = 0;
	if (c == 's')
	{
		arg.c = va_arg(ap, char *);
		ft_putstr(arg.c);
		i = ft_strlen(arg.c);
	}
	else if (c == 'c')
	{
		arg.b = va_arg(ap, int);
		ft_putchar(arg.b);
		i++;
	}
	return (i);
}

static int		ft_printf_is_int(va_list ap)
{
	t_var	arg;
	int		i;

	i = 0;
	arg.a = va_arg(ap, int);
	i = ft_putnbr_len(arg.a);
	return (i);
}

int				ft_printf_print_arg(const char *format, va_list ap, int i)
{
	int		count;

	count = 0;
	if (format[i] == 'i' || format[i] == 'd')
		count = ft_printf_is_int(ap);
	else if (format[i] == 's')
		count = ft_printf_is_char(format[i], ap);
	else if (format[i] == 'c')
		count = ft_printf_is_char(format[i], ap);
	else
	{
		ft_putstr("debug4\n");
		ft_putstr("yolo");
	}
	va_end(ap);
	count--;
	return (count);
}
