/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 18:56:20 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/26 18:56:21 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static void		handle_sigtstp(void)
{
	char		ctrlz[2];
	t_termios	term;

	ctrlz[0] = term.c_cc[VSUSP];
	ctrlz[1] = 0;
    //ft_printf("Stopping...\n");
    tcgetattr(0, &term);
    term.c_lflag |= (ICANON | ECHO);
	tcsetattr(0, TCSADRAIN, &term);
	FT_PUT_CMD("te");
	FT_PUT_CMD("ve");
    signal(SIGTSTP, SIG_DFL); /* Restaure l'action par défaut du SIGTSTP: suspension du processus */
   	//signal(SIGCONT, signalhandler);
   	ioctl(0, TIOCSTI, ctrlz); /* simule une saisie au clavier */

}

static void		handle_sigcont(void)
{
	t_termios	term;

	//ft_printf("Restarting...\n");
	tcgetattr(0, &term);
	term.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(0, TCSADRAIN, &term);
	FT_PUT_CMD("ti");
	FT_PUT_CMD("vi");
	signal(SIGTSTP, signalhandler);
}

void		signalhandler(int sig)
{
	if (sig == SIGTSTP)
		handle_sigtstp();
	else if (sig == SIGCONT)
		handle_sigcont();
	//else if (sig == SIGWINCH)
	//	handle_sigwinch();
	//if (sig == SIGINT || sig == SIGTERM)
	//	handle_killers();
}

void		signal_handling(void)
{
	signal(SIGTSTP, signalhandler);
	signal(SIGCONT, signalhandler);
	//signal(SIGWINCH, signalhandler);
	//signal(SIGINT, signalhandler);
	//signal(SIGTERM, signalhandler);
	//signal(SIGSTOP, signalhandler);

}
