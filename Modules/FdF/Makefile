# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/02 19:16:13 by tnoah             #+#    #+#              #
#    Updated: 2015/04/02 18:03:06 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc

FLAGS = -Wall -Werror -Wextra

LIBFT = -L./libft -lft

MLX = -L./minilibx_macos -lmlx

GFLAGS = -framework OpenGL -framework AppKit

SDIR = srcs/

ODIR = objects/

IDIR = -I includes/ -I libft/includes/ -I minilibx_macos/

SRC = main.c convert_map.c \
	  parser_map.c draw.c \
	  trace_map.c trace_line.c \
	  print_pixel.c regenerate.c \
	  fdf_menu.c coord2d.c

OBJ = $(SRC:.c=.o)
	S = $(addprefix $(SDIR), $(SRC))
	O = $(addprefix $(ODIR), $(OBJ))

all: lib minilibx $(NAME)

$(NAME): $(O)
		@echo "-> Creating $(NAME)..."
		@$(CC) -ggdb $(FLAGS) $(IDIR) $^ -o $(NAME) $(MLX) $(LIBFT) $(GFLAGS)
		@echo "-> Done !"

$(ODIR)%.o: $(SDIR)%.c
		@echo "-> Compiling $<..."
		@$(CC) -ggdb $(FLAGS) $(IDIR) -c $< -o $@

lib:
		@make -C libft

minilibx:
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

re: fclean all

.PHONY: all clean fclean re
