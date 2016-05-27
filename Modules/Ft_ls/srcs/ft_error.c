/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 21:06:37 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/26 22:45:14 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_error.h"
#include "ft_ls.h"

void		ft_error(int num_error, int type_error, char *param, t_bool b_exit)
{
	if (type_error == STR_ERROR)
	{
		ft_putstr("ls: ");
		ft_putstr(param);
		ft_putstr(": ");
		ft_putstr(strerror(num_error));
		ft_putchar('\n');
	}
	else if (type_error == OPT_ERROR)
		ft_illegal_option(param);
	if (b_exit)
		exit(EXIT_FAILURE);
}

void		ft_illegal_option(char *param)
{
	ft_putstr("ls: illegal option -- ");
	ft_putchar_endl(*param);
	ft_putstr("usage: ls [-");
	ft_putchar(OPT_REC);
	ft_putchar(OPT_A);
	ft_putchar(OPT_L);
	ft_putchar(OPT_REV);
	ft_putchar(OPT_T);
	ft_putstr("] [file ...]\n");
}
