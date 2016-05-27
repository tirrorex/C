# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjensen <gjensen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/14 11:47:35 by gjensen           #+#    #+#              #
#    Updated: 2014/08/14 22:51:55 by gjensen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAGS = -Werror -Wall -Wextra

SRC = ./ft_display_file.c

OBJET = ./ft_display_file.o

all: $(NAME) 

$(NAME):
	gcc $(CFLAGS) -c $(SRC) 
	gcc -o $(NAME) $(OBJET)

clean:
	/bin/rm -f $(OBJET)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
