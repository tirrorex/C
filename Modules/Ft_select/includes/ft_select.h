/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 16:22:04 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/25 18:28:52 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

# include <stdlib.h>
# include <sys/types.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/param.h>
# include <fcntl.h>
# include <libft.h>
# include <signal.h>
# include <term.h>
# include <curses.h>
# include <termcap.h>
# include <termios.h>
# include <err.h>
# include <sys/ioctl.h>

# define TOOFEWARG				7
# define USAGE					"usage: ft_select choice1 choice2..."
# define NOENV					"empty environment."
# define FT_PUT_CMD(S)			(tputs(tgetstr(S, NULL), 1, &tputchar))


typedef struct					s_elem
{
	struct s_elem				*down;
	struct s_elem				*up;
	char						*content;
	int							reverse;
	int							underline;
}								t_elem;

typedef struct					s_pile
{
	struct s_elem				*head;
	struct s_elem				*tail;
	size_t						length;
}								t_pile;

typedef struct termios			t_termios;
typedef struct winsize			t_winsize;
typedef struct					s_word
{
	struct s_word				*prev;
	struct s_word				*next;
	char						*str;
	int							current;
}								t_word;

typedef struct					s_data
{
	t_termios					term;
	char						*name_term;
	char						buffer[2048];
	t_word						*words;
	t_pile						*pile;
	t_winsize					wsize;
	int							max_height;
	int							max_width;
}								t_data;

int								ft_select(t_data *data);
int								is_up(char *key);
int								is_down(char *key);
int								is_left(char *key);
int								is_right(char *key);
int								error(char *msg);
void							signal_handling(void);
void							signalhandler(int sig);
int								tputchar(int c);
int								check_size(t_data *data);
void							display(t_data *data);
int								get_max_width(t_pile *pile);
int								is_escape(char *key);

#endif
