/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:35:33 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/28 20:31:26 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <stdlib.h>
# include <dirent.h>
# include <sys/types.h>
# include <string.h>
# include <errno.h>

# define CURRENT_DIR	"."
# define OPTS			"Raltr"
# define TRUE			1
# define FALSE			0
# define NB_OPTS		5
# define OPT_REC		'R'
# define OPT_A			'a'
# define OPT_L			'l'
# define OPT_T			't'
# define OPT_REV		'r'

typedef int					t_bool;
typedef struct direct		t_dirent;

typedef struct		s_data
{
		char		**params;
		int			nb_params;
		char		opts[NB_OPTS];
}					t_data;

t_data		*ft_eval_options(char *str, t_data *data);
t_data		*ft_parse_entry(int ac, char **av);
t_data		*ft_create_data(int nb_params);
void		ft_error(int num_error, int type_error, char *param, t_bool b_exit);
void		ft_illegal_option(char *param);
void		ft_ls(t_data *data);

#endif
