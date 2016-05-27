/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 19:02:19 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 19:02:23 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

typedef struct		s_var
{
	int				a;
	char			b;
	char			*c;
}					t_var;
int					ft_printf(const char *format, ...);
int					ft_printf_print_arg(const char *format, va_list ap, int i);

#endif
