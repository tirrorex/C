/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcecchin <gcecchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 11:43:31 by gcecchin          #+#    #+#             */
/*   Updated: 2014/08/15 17:07:40 by gcecchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define OPEN	1
# define CLOSE	0

typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

void			ft_putstr(char *str);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
void			open_door(t_door *door);

#endif
