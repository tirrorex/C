/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 18:56:20 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/28 08:59:29 by ale-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		handle_sigsegv(void)
{
	printw("Oups! Tu viens de faire une connerie");
}

void			signalhandler(int sig)
{
	if (sig == SIGSEGV)
		handle_sigsegv();
}

void			signal_handling(void)
{
	signal(SIGSEGV, signalhandler);
}
