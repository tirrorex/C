# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 13:49:28 by tnoah             #+#    #+#              #
#    Updated: 2015/02/23 08:29:25 by tnoah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
NASM = ~/.brew/Cellar/nasm/2.11.06/bin/nasm

SRCDIR = srcs
OBJDIR = obj

SRC = ft_isalnum.s ft_isalpha.s \
	ft_isascii.s ft_isdigit.s \
	ft_isprint.s ft_tolower.s \
	ft_toupper.s ft_strlen.s \
	ft_puts.s ft_strcat.s \
	ft_memset.s ft_bzero.s \
	ft_memcpy.s ft_strdup.s \
	ft_cat.s ft_strnew.s \
	ft_memalloc.s

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.s, %.o,$(SRC)))
OBJS_DIRS = $(sort $(dir $(OBJS)))

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

$(OBJDIR)/%.o: $(SRCDIR)/%.s
		@$(NASM) -f macho64 -o $@ $<

.PHONY: all clean fclean re
