/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:11:57 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:11:58 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void				error_pushswap(int n)
{
	if (n == 1)
		ft_putendl_fd("Error", 2);
	else if (n == 2)
		ft_printf("list already sorted\n");
	exit(-1);
}
