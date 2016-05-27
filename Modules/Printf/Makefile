# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/02 19:16:13 by tnoah             #+#    #+#              #
#    Updated: 2015/01/17 16:53:30 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SDIR = srcs/
ODIR = objects/
IDIR = includes/
SRC = ft_printf.c \
	  ft_strlen.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_strclen.c \
	  ft_strchr.c \
	  ft_putnbr_len.c \
	  ft_putnbr.c \
	  ft_printf_is.c

OBJ = $(SRC:.c=.o)
	EXT = ft_printf.h
	S = $(addprefix $(SDIR), $(SRC))
	O = $(addprefix $(ODIR), $(OBJ))
	E = $(addprefix $(IDIR), $(EXT))

all: $(NAME)

$(NAME): $(O) $(E)
		@echo "-> Creating $(NAME)..."
		@ar rc $(NAME) $(O)
		@echo "-> Optimising $(NAME)..."
		@ranlib $(NAME)
		@echo "-> Done !"

$(ODIR)%.o: $(SDIR)%.c
		@echo "-> Compiling $<..."
		@$(CC) $(FLAGS) -I$(IDIR) -c $< -o $@

$(O): | ./objects

./objects:
		@mkdir $(ODIR)

clean:
		@echo "-> Cleaning object files..."
		@/bin/rm -rf $(ODIR)

fclean: clean
		@echo "-> Cleaning $(NAME)..."
		@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
