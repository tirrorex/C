all: Sully

Sully: Sully.o
	clang -o Sully Sully.o

Sully.o: Sully.c
	clang -o Sully.o -c Sully.c -Wall -Wextra -Werror

clean:
	rm -rf *.o

fclean: clean
	rm -rf Sully

re: fclean all
