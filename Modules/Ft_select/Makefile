# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2015/03/14 16:33:33 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_select

SRCDIR = srcs/

SRCFILE = main.c input.c \
	error.c signal_handling.c \
	tputfunc.c get_max.c \
	display.c directional_input.c \
	check.c ft_select.c \

SRC = $(addprefix $(SRCDIR),$(SRCFILE))

OBJ = $(SRC:.c=.o)

CC = gcc 

DEBUG = -g

CFLAGS = -Wall -Wextra -Werror

LDLIBS = -lncurses

INCLUDEDIR = -I ./includes

all: $(NAME)

$(NAME): $(OBJ)
	@echo "-> Compiling libft..."
	make -C libft/ fclean
	@make -C libft/
	@echo "-> Creating executable..."
	@$(CC) -o $(NAME) $(OBJ) $(LDLIBS) $(INCLUDEDIR) -L libft/ -lft

%.o:%.c
	@echo "-> Compiling .c..."
	@$(CC) $(DEBUG) $(CFLAGS) -c -o $@ $< -I libft/includes/ $(INCLUDEDIR)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
