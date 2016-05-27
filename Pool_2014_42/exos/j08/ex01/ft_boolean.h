/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/11 16:57:15 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/11 19:29:51 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# typedef int t_bool
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have a impair number of arguments.\n"
# define EVEN(Value) Value % 2
# include <unistd.h>
#endif
