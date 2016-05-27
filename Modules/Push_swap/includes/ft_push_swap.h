/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 14:10:00 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:08:30 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <libft.h>

typedef struct		s_elem
{
	struct s_elem	*down;
	struct s_elem	*up;
	int				content;
}					t_elem;

typedef struct		s_pile
{
	struct s_elem	*head;
	struct s_elem	*tail;
	size_t			length;
}					t_pile;

typedef struct		s_option
{
	int				v;
	int				c;
	int				s;
	int				size;
	int				start;
}					t_option;

t_pile				*create_pile(void);
void				pile_push(t_pile **pile, char **str, int start);
void				pile_del(t_pile **pile);
void				ft_push_swap(t_pile **pile1, t_pile **pile2,
		t_option *option);
int					check_param(char **av, int start);
void				pa(t_pile **pile1, t_pile **pile2, t_option *option);
void				pb(t_pile **pile1, t_pile **pile2, t_option *option);
void				ra(t_pile **pile1, t_pile **pile2, t_option *option);
void				rb(t_pile **pile1, t_pile **pile2, t_option *option);
void				rr(t_pile **pile1, t_pile **pile2, t_option *option);
void				rra(t_pile **pile1, t_pile **pile2, t_option *option);
void				rrb(t_pile **pile1, t_pile **pile2, t_option *option);
void				rrr(t_pile **pile1, t_pile **pile2, t_option *option);
void				sa(t_pile **pile1, t_pile **pile2, t_option *option);
void				sb(t_pile **pile1, t_pile **pile2, t_option *option);
void				ss(t_pile **pile1, t_pile **pile2, t_option *option);
void				error_pushswap(int n);
int					test_sort(t_pile **pile1, t_pile **pile2);
void				pile_sort(t_pile **pile1, t_pile **pile2, t_option *option);
void				put_result(t_pile **pile1, t_pile **pile2);
void				check_top(t_pile **pile1, t_pile **pile2, t_option *option);
void				check_bottom(t_pile **pile1, t_pile **pile2,
		t_option *option);
void				rotate_pile(t_pile **pile1, t_pile **pile2,
	t_option *option);
int					get_min(t_pile **pile);
size_t				get_pos(t_pile **pile, int min);

#endif
