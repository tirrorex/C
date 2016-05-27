/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:19:45 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/09 10:50:25 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

# define NB_FLAGS	2
# define CONV		"sSpdDioOuUxXcC"

typedef struct		s_var
{
	int				a;
	char			b;
	char			*c;
}					t_var;

typedef struct		s_arg
{
	int				range;
	int				precision;
	char			flag[NB_FLAGS];
	char			arg;
	char			conversion;
	char			*output;
	int				len;
}					t_arg;

typedef struct 		s_flags
{
	char			space;
	int				width;
	int				precision;

}					t_flags;

int					ft_printf(const char *format, ...);
size_t				ft_strlen(const char *s);
int					ft_strclen(char *str, int c);
char				*ft_strchr(const char *s, int c);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
size_t				ft_putnbr_len(int n);
void				ft_putnbr(int n);
int				ft_printf_print_arg(const char *format, va_list ap, int i);

#endif
