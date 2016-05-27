	char		*name_term;
	t_termios	term;
	t_data		data;

	(void)av;
	(void)ac;
	ft_putstr("\033[?1049h\033[H");
	if ((name_term = getenv("TERM")) == NULL)
		return (-1);
	if (tgetent(NULL, data.name_term) == ERR)
		return (-1);
	if (tcgetattr(0, &data.term) == 1)
		return (-1);
	term.c_lflag &= ~(ICANON);
	term.c_lflag &= ~(ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSADRAIN, &term) == -1)
	return (-1);
	deal_with_input();
	reset_term(&term);
	ft_putstr("\033[7mReversed\033[m Normal\n");
	return (0);