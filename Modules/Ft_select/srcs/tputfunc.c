/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tputfunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 11:06:21 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/03 11:06:22 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int			tputchar(int c)
{
	write(1, &c, 1);
	return (1);
}