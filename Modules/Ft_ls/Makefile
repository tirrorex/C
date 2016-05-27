# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2014/12/28 20:32:02 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRCDIR = srcs/

SRC = $(SRCDIR)ft_data_treatment.c \
		$(SRCDIR)main.c \
		$(SRCDIR)ft_error.c \
		$(SRCDIR)ft_ls.c \
		$(SRCDIR)dir_treatment.c

OBJ = $(SRC:.c=.o)

CC = gcc 

DEBUG = -g

CFLAGS = -Wall -Wextra -Werror

INCLUDEDIR = -I ./includes

all: $(NAME)

$(NAME): $(OBJ)
	@echo "-> Compiling libft..."
	make -C libft/ fclean
	@make -C libft/
	@echo "-> Creating executable..."
	@$(CC) -o $(NAME) $(OBJ) $(INCLUDEDIR) -L libft/ -lft

%.o:%.c
	@echo "-> Compiling .c..."
	@$(CC) $(DEBUG) $(CFLAGS) -c -o $@ $< -I libft/includes/ $(INCLUDEDIR)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
