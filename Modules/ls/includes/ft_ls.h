/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 16:35:33 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/03 16:49:10 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <stdlib.h>
# include <dirent.h>
# include <sys/types.h>
# include <string.h>
# include <errno.h>
# include <sys/stat.h>

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
typedef struct dirent		t_dirent;
typedef struct stat			t_stat;

typedef struct		s_data
{
		char		**params;
		int			nb_params;
		char		opts[NB_OPTS];
}					t_data;


#endif
