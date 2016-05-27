/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 19:12:37 by vroche            #+#    #+#             */
/*   Updated: 2014/08/17 19:12:41 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	struct s_list	*next;
	char			str[2];
}					t_list;

t_list				*ft_create_elem(char *str);
void				ft_list_push_back(t_list **begin_list, char *str);
int					ft_list_size(t_list **begin_list);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strcat(char *dest, char *src);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
char				*colle00(int x, int y, char *tab);
char				*colle01(int x, int y, char *tab);
char				*colle02(int x, int y, char *tab);
char				*colle03(int x, int y, char *tab);
char				*colle04(int x, int y, char *tab);
int					ft_strcmp(char *s1, char *s2);

#endif
