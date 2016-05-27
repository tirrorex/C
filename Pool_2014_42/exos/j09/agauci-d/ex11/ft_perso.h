/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 11:49:22 by agauci-d          #+#    #+#             */
/*   Updated: 2014/08/15 12:07:15 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

enum
{
	SAVE_AUSTIN_POWERS
};

typedef struct		s_point
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}					t_perso;

#endif
