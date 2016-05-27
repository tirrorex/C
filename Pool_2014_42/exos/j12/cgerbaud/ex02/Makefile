#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/14 20:09:36 by cgerbaud          #+#    #+#              #
#    Updated: 2014/08/14 20:29:15 by cgerbaud         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	ft_tail

SRC		=	main.c		\
			ft_tail.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Werror -Wextra

CC		=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
