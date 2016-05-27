# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2015/03/01 19:51:10 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game_2048

SRCDIR = srcs/

SRCFILE = main.c input.c \
	display.c deal_with_keys.c \
	signal_handling.c merge.c \
	check.c

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

.PHONY: all clean fclean re
