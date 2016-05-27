/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 13:45:42 by agauci-d          #+#    #+#             */
/*   Updated: 2014/08/15 15:55:48 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define		TRUE 1
# define		FALSE 0
# define		OPEN 1
# define		CLOSE 0
# define		EXIT_SUCCESS 0

typedef int		t_bool;
typedef struct	s_point
{
	int state;
}				t_door;

t_bool			close_door(t_door *door);
void			ft_putstr(char *str);
t_bool			close_door(t_door *door);
t_bool			is_door_close(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			open_door(t_door *door);
#endif
