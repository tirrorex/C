# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vroche <vroche@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/17 19:27:25 by vroche            #+#    #+#              #
#    Updated: 2014/08/17 19:30:27 by vroche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

HDR = ./includes/

C = ./srcs/colle00.c \
	./srcs/colle01.c \
	./srcs/colle02.c \
	./srcs/colle03.c \
	./srcs/colle04.c \
	./srcs/ft_ft.c \
	./srcs/ft_ft2.c \
	./srcs/ft_list.c \
	./srcs/main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(C) -I $(HDR) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

