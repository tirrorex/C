/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 15:10:12 by wyeo              #+#    #+#             */
/*   Updated: 2014/08/15 15:36:06 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>
# define SAVE_AUSTIN_POWERS "Femme-bot"

typedef struct			s_perso
{
	char				*name;
	char				*profession;
	float				life;
	int						age;
}							t_perso;

char					*strdup(char *str);

#endif
