all: Grace

Grace: Grace.o
	clang -o Grace Grace.o

Grace.o: Grace.c
	clang -o Grace.o -c Grace.c -Wall -Wextra -Werror

clean:
	rm -rf *.o

fclean: clean
	rm -rf Grace
