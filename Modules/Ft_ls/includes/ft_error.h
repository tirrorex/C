/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 21:08:28 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/26 21:44:16 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_R
# define FT_ERROR_H

# include "ft_ls.h"

# define STR_ERROR				1
# define OPT_ERROR				2
# define NO_SUCH_F_D			2
# define NOT_ENOUGH_MEM			12
# define ILLEGAL_OPTION			0

void	ft_error(int num_error, int type_error, char *param, t_bool b_exit);
void	ft_illegal_options(char *param);

#endif
