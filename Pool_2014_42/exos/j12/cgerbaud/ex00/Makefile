#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/14 20:06:47 by cgerbaud          #+#    #+#              #
#    Updated: 2014/08/14 20:07:17 by cgerbaud         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	ft_display_file

SRC		=	main.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Werror -Wextra

CC		=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
