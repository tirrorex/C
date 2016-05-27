/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 20:12:58 by cgerbaud          #+#    #+#             */
/*   Updated: 2014/08/14 23:10:40 by cgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef				FT_TAIL_H
# define			FT_TAIL_H

# include			<unistd.h>

# define	READ_SIZE	4096

typedef struct		s_chain
{
	unsigned int	size;
	char			buff[READ_SIZE];
	struct s_chain	*next;
}					t_chain;

void				ft_tail(const char *const filename, const unsigned int nbr,
							const char flag);

#endif
