# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2015/04/03 08:19:11 by zipeldiablo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

LIBFT = -L./libft -lft

SDIR = srcs/

ODIR = objects/

IDIR = -I includes/ -I libft/includes/ -I minilibx_macos/

SRC = main.c pile.c \
	  ft_push_swap.c check_param.c \
	  s.c r.c \
	  p.c rr.c \
	  error.c sort.c \
	  test_sort.c compare.c \
	  put.c rotate_pile.c

OBJ = $(SRC:.c=.o)
	S = $(addprefix $(SDIR), $(SRC))
	O = $(addprefix $(ODIR), $(OBJ))

all: lib  $(NAME)

$(NAME): $(O)
		@echo "-> Creating $(NAME)..."
		@$(CC) -ggdb $(FLAGS) $(IDIR) $^ -o $(NAME) $(LIBFT)
		@echo "-> Done !"

$(ODIR)%.o: $(SDIR)%.c
		@echo "-> Compiling $<..."
		@$(CC) -ggdb $(FLAGS) $(IDIR) -c $< -o $@

lib:
		@make -C libft

$(O): | ./objects

./objects:
		@mkdir $(ODIR)

clean:
		@echo "-> Cleaning object files..."
		@/bin/rm -rf $(ODIR)
		@make clean -C libft

fclean: clean
		@echo "-> Cleaning $(NAME)..."
		@/bin/rm -f $(NAME)
		@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re