# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/02 19:16:13 by tnoah             #+#    #+#              #
#    Updated: 2015/03/14 14:46:56 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBFT = -L./libft -lft
MACOS = -L./minilibx_macos -mlx
GFLAGS = -framework OpenGL -framework AppKit
SDIR = srcs/
ODIR = objects/
IDIR = -I includes/ -I libft/includes/
SRC = main.c convert_map.c \
	  parser_map.c draw.c \
	  trace_map.c

OBJ = $(SRC:.c=.o)
	S = $(addprefix $(SDIR), $(SRC))
	O = $(addprefix $(ODIR), $(OBJ))
	E = $(addprefix $(IDIR), $(EXT))

all: lib $(NAME)

$(NAME): $(O) $(E)
		@echo "-> Creating $(NAME)..."
		@$(CC) $(FLAGS) $(GFLAGS) $(IDIR) $^ -o $(NAME) $(LIBFT) $(MACOS)
		@echo "-> Done !"

$(ODIR)%.o: $(SDIR)%.c
		@echo "-> Compiling $<..."
		@$(CC) $(FLAGS) $(GFLAGS) $(IDIR) -c $< -o $@

lib:
		@make -C libft
		@make -C minilibx_macos

$(O): | ./objects

./objects:
		@mkdir $(ODIR)

clean:
		@echo "-> Cleaning object files..."
		@/bin/rm -rf $(ODIR)
		@make clean -C libft
		@make clean -C minilibx_macos

fclean: clean
		@echo "-> Cleaning $(NAME)..."
		@/bin/rm -f $(NAME)
		@make fclean -C libft
		@make fclean -C minilibx_macos

re: fclean all

.PHONY: all clean fclean re
