# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2015/02/13 18:18:10 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCDIR = srcs
OBJDIR = obj
INCDIR = includes

SRC = \
		mem/ft_memset.c \
	  	mem/ft_bzero.c \
		mem/ft_memcpy.c \
		mem/ft_memccpy.c \
		mem/ft_memmove.c \
		mem/ft_memchr.c \
		mem/ft_memcmp.c \
		str/ft_strlen.c \
		str/ft_strdup.c \
		str/ft_strcpy.c \
		str/ft_strncpy.c \
		str/ft_strcat.c \
		str/ft_strncat.c \
		str/ft_strlcat.c \
		str/ft_strchr.c \
		str/ft_strrchr.c \
		str/ft_strstr.c \
		str/ft_strnstr.c \
		str/ft_strcmp.c \
		str/ft_strncmp.c \
		nbr/ft_atoi.c \
		chr/ft_isalpha.c \
		chr/ft_isdigit.c \
		chr/ft_isalnum.c \
		chr/ft_isascii.c \
		chr/ft_isprint.c \
		chr/ft_toupper.c \
		chr/ft_tolower.c \
		mem/ft_memalloc.c \
		mem/ft_memdel.c \
		str/ft_strnew.c \
		str/ft_strdel.c \
		str/ft_strclr.c \
		str/ft_striter.c \
		str/ft_striteri.c \
		str/ft_strmap.c \
		str/ft_strmapi.c \
		str/ft_strequ.c \
		str/ft_strnequ.c \
		str/ft_strsub.c \
		str/ft_strjoin.c \
		str/ft_strtrim.c \
		str/ft_strsplit.c \
		nbr/ft_itoa.c \
		put/ft_putchar.c \
		put/ft_putstr.c  \
		put/ft_putendl.c \
		put/ft_putnbr.c \
		put/ft_putchar_fd.c \
		put/ft_putstr_fd.c \
		put/ft_putendl_fd.c \
		put/ft_putnbr_fd.c \
		lst/ft_lstnew.c \
		lst/ft_lstdelone.c \
		lst/ft_lstdel.c \
		lst/ft_lstadd_front.c \
		lst/ft_lstadd_after.c \
		lst/ft_lstadd_back.c \
		lst/ft_lstpush_front.c \
		lst/ft_lstln.c \
		lst/ft_lstln_front.c \
		lst/ft_lstln_after.c \
		lst/ft_lstln_back.c \
		lst/ft_lstiter.c \
		lst/ft_lstmap.c \
		str/ft_realloc.c \
		str/ft_strclen.c \
		read/get_next_line.c \
		swap/ft_swap_int.c \
		swap/ft_swap_char.c \
		put/ft_putnbr_endl.c \
		put/ft_putnbr_endl_fd.c \
		btree/btree_create_node.c \
		btree/btree_apply_prefix.c \
		btree/btree_apply_infix.c \
		btree/btree_apply_suffix.c \
		btree/btree_insert_data.c \
		btree/btree_search_item.c \
		btree/ft_display_tree.c \
		btree/ft_compare_tree.c \
		printf/ft_printf.c \
		put/ft_putnbr_len.c \
		printf/ft_printf_is.c \
		put/ft_inter.c \
		lst/ft_lstlen.c \
		lst/ft_lsttotab.c \
		tab/ft_tablen.c \
		tab/ft_tabjoin.c \
		tab/ft_tabdel.c \
		swap/ft_swap_str.c \
		tab/ft_tabdel_array.c \
		chr/ft_isspace.c \
		str/ft_epurstr.c \
		tab/ft_tabcpy.c \
		tab/ft_tabtolst.c


SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o,$(SRC)))
OBJS_DIRS = $(sort $(dir $(OBJS)))
INCS = $(addprefix -I , $(INCDIR))

all: $(NAME)
$(NAME): build $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
build:
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJS_DIRS)
clean:
	@rm -rf $(OBJDIR)
fclean: clean
	@rm -f $(NAME)
re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@$(CC) -c -o $@ $< $(INCS) $(CFLAGS)

.PHONY: all clean fclean re
