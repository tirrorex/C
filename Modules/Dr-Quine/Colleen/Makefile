all: Colleen

Colleen: Colleen.o
	clang -o Colleen Colleen.o

Colleen.o: Colleen.c
	clang -o Colleen.o -c Colleen.c -Wall -Wextra -Werror

clean:
	rm -rf *.o

fclean: clean
	rm -rf Colleen
