#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bal-khan <bal-khan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/12 00:56:03 by bal-khan          #+#    #+#              #
#    Updated: 2014/08/12 19:39:35 by bal-khan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

A=ft_putchar.c
B=ft_putstr.c
C=ft_strcmp.c
D=ft_strlen.c
E=ft_swap.c
F=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o a.out
SRC=./srcs/
HEAD=./includes/
NAME=a.out
SRC_MAIN=main.c
OBJ_MAIN=main.o
NAMELIB =libft.a
NAMELIB_COMP=lft


all:
	@gcc -Wall -Wextra -Werror  $(SRC_MAIN) -o $(NAME) 
	@echo "    /\**/\ "
	@echo "   ( o_o  )_) "
	@echo "   ,(u  u  ,),  Compilation complete"



libs:

		@echo "               _    if Static Librairies are already made,"
		@echo "              | |      Remove them first !!"
		@echo "              | |===( )   "
		@echo "              |_|   |||   ( ͡° ͜ʖ ͡°)    (make fclean)"
		@echo "                     ||| ( ͡° ͜ʖ ͡°)                    ____"
		@echo "                      |||  ( ͡° ͜ʖ ͡°)                 ||   \_"
		@echo "                       ||||||                       ||     |"
		@echo "                       ||||||                    ...||__/|-\""
		@echo "                       ||||||                 __|________|__"
		@echo "                         |||                 |______________|"
		@echo "                         |||                 || ||      || ||"
		@echo "                         |||                 || ||      || ||"
		@echo " ------------------------|||-----------------||-||------||-||-------"
		@echo "                         |__>                || ||      || ||"
	
		@gcc -c -Wall -Wextra -Werror  ./$(SRC)/$(A) ./$(SRC)/$(B) ./$(SRC)/$(C) ./$(SRC)/$(D) ./$(SRC)/$(E) -I$(HEAD)
		@ar rc $(NAMELIB) $(F) 
		@ranlib $(NAMELIB)
		@echo "                _________________________________________________"
		@echo "                |                                                | "
		@echo "                |                                                |_____    __ "
		@echo "                |  Static Librairies Succefully createds         |     |__|  |_________ "
		@echo "                |________________________________________________|     |::|  |        / "
		@echo "   /\**/\       |                                                \.____|::|__|       < "
		@echo "  ( o_o  )_     |                                                       \::/  \._______\ "
		@echo "   (u--u   \_)  | "
		@echo "    (||___   )==\ "
		@echo "  ,dP'/b/=( /P'/b\ "
		@echo "  |8 || 8\=== || 8 "
		@echo "  'b,  ,P  'b,  ,P "
		@echo "    ''''     '''' "
	

clean: 
	@rm -f $(F)
	@echo "    o"
	@echo " \_/\o"
	@echo "( Oo)                               \|/ "
	@echo "( = )  .===O-=-=-=-=-=-=-=-=-=-=-=-=-O- "
	@echo "/   \_/U:                           /|\ "
	@echo "||  |_/ "
	@echo "\\  |         Removing objects files"
	@echo "{K ||"
	@echo " | PP"
	@echo " | ||"
	@echo " (__\\"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAMELIB)
	@echo "          Removing                /^^^/           /] "
	@echo "                                /   ]           / ] "
	@echo "    O   Librairies     _______/    ]___       /  ] "
	@echo "        &             /                \_____/   / "
	@echo " O      Executable  _/   [@]  \ \                \ "
	@echo "          ___//_    /..         | |                ] "
	@echo "   o     /o )   \/   VVVvvv\    | |         _/\    ] "
	@echo "     O<  )___\\_/\         |               /    \  ] "
	@echo "                    AAA^^^^^              /       \] "
	@echo "                     \_________\   \_____/ "
	@echo "                                \   \ "
	@echo "                                 \___\ "

re: fclean all
