# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2015/01/23 11:44:17 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c \
	  	ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c  \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_realloc.c \
		ft_strclen.c \
		get_next_line.c \
		ft_swap_int.c \
		ft_swap_char.c \
		ft_putnbr_endl.c \
		ft_putnbr_endl_fd.c \
		btree_create_node.c \
		btree_apply_prefix.c \
		btree_apply_infix.c \
		btree_apply_suffix.c \
		btree_insert_data.c \
		btree_search_item.c \
		ft_display_tree.c \
		ft_compare_tree.c \
		ft_printf.c \
		ft_putnbr_len.c \
		ft_printf_is.c

OBJ = $(SRC:.c=.o)

CC = gcc 

DEBUG = -g

LC = ar

CFLAGS = -Wall -Wextra -Werror

LFLAGS = rc

INCLUDEDIR = -I ./includes

all: $(NAME)

$(NAME):
	$(CC) $(DEBUG) $(CFLAGS) -c $(SRC) $(INCLUDEDIR)
	$(LC) $(LFLAGS) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
