/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 19:11:28 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/19 19:16:34 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libftasm.h"
#include <ctype.h>
#include <fcntl.h>

size_t	strlen(const char *s);
int		open(const char*path, int oflag, ...);
void	test_isalpha(void);
void	test_is_digit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_strlen(void);
void	test_puts(void);
void	test_strcat(void);
void	test_memset(void);
void 	test_memcpy(void);
void 	test_strdup(void);
void	test_cat(void);

int		main(void)
{
	test_isalpha();
	test_is_digit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_strlen();
	test_puts();
	test_strcat();
	test_memset();
	test_memcpy();
	test_strdup();
	test_cat();

	printf("\n");
	return (0);
}

void	test_isalpha(void)
{
	printf("\nisalpha\n");

	printf("normal: %c --> %d | ", 64, isalpha(64));
	printf("asm: %c --> %d\n", 64, ft_isalpha(64));

	printf("normal: %c --> %d | ", 65, isalpha(65));
	printf("asm: %c --> %d\n", 65, ft_isalpha(65));

	printf("normal: %c --> %d | ", 66, isalpha(66));
	printf("asm: %c --> %d\n", 66, ft_isalpha(66));

	printf("normal: %c --> %d | ", 89, isalpha(89));
	printf("asm: %c --> %d\n", 89, ft_isalpha(89));

	printf("normal: %c --> %d | ", 90, isalpha(90));
	printf("asm: %c --> %d\n", 90, ft_isalpha(90));

	printf("normal: %c --> %d | ", 91, isalpha(91));
	printf("asm: %c --> %d\n", 91, ft_isalpha(91));

	printf("normal: %c --> %d | ", 96, isalpha(96));
	printf("asm: %c --> %d\n", 96, ft_isalpha(96));

	printf("normal: %c --> %d | ", 97, isalpha(97));
	printf("asm: %c --> %d\n", 97, ft_isalpha(97));


	printf("normal: %c --> %d | ", 98, isalpha(98));
	printf("asm: %c --> %d\n", 98, ft_isalpha(98));

	printf("normal: %c --> %d | ", 121, isalpha(121));
	printf("asm: %c --> %d\n", 121, ft_isalpha(121));

		printf("normal: %c --> %d | ", 122, isalpha(122));
	printf("asm: %c --> %d\n", 122, ft_isalpha(122));

	printf("normal: %c --> %d | ", 123, isalpha(123));
	printf("asm: %c --> %d\n", 123, ft_isalpha(123));
}

void	test_is_digit(void)
{
	printf("\nisdigit\n");

	printf("normal: %c --> %d | ", 47, isdigit(47));
	printf("asm: %c --> %d\n", 47, ft_isdigit(47));

	printf("normal: %c --> %d | ", 48, isdigit(48));
	printf("asm: %c --> %d\n", 48, ft_isdigit(48));

	printf("normal: %c --> %d | ", 49, isdigit(49));
	printf("asm: %c --> %d\n", 49, ft_isdigit(49));

	printf("normal: %c --> %d | ", 56, isdigit(56));
	printf("asm: %c --> %d\n", 56, ft_isdigit(56));

	printf("normal: %c --> %d | ", 57, isdigit(57));
	printf("asm: %c --> %d\n", 57, ft_isdigit(57));

	printf("normal: %c --> %d | ", 58, isdigit(58));
	printf("asm: %c --> %d\n", 58, ft_isdigit(58));
}

void	test_isalnum(void)
{
	printf("\nisalnum\n");

	printf("normal:%c --> %d | ", 47, isalnum(47));
	printf("asm:%c --> %d\n", 47, ft_isalnum(47));

	printf("normal:%c --> %d | ", 48, isalnum(48));
	printf("asm:%c --> %d\n", 48, ft_isalnum(48));

	printf("normal:%c --> %d | ", 49, isalnum(49));
	printf("asm:%c --> %d\n", 49, ft_isalnum(49));

	printf("normal:%c --> %d | ", 56, isalnum(56));
	printf("asm:%c --> %d\n", 56, ft_isalnum(56));

	printf("normal:%c --> %d | ", 57, isalnum(57));
	printf("asm:%c --> %d\n", 57, ft_isalnum(57));

	printf("normal:%c --> %d | ", 58, isalnum(58));
	printf("asm:%c --> %d\n", 58, ft_isalnum(58));

	printf("normal:%c --> %d | ", 64, isalnum(64));
	printf("asm:%c --> %d\n", 64, ft_isalnum(64));

	printf("normal:%c --> %d | ", 65, isalnum(65));
	printf("asm:%c --> %d\n", 65, ft_isalnum(65));

	printf("normal:%c --> %d | ", 66, isalnum(66));
	printf("asm:%c --> %d\n", 66, ft_isalnum(66));

	printf("normal:%c --> %d | ", 89, isalnum(89));
	printf("asm:%c --> %d\n", 89, ft_isalnum(89));

	printf("normal:%c --> %d | ", 90, isalnum(90));
	printf("asm:%c --> %d\n", 90, ft_isalnum(90));

	printf("normal:%c --> %d | ", 91, isalnum(91));
	printf("asm:%c --> %d\n", 91, ft_isalnum(91));

	printf("normal:%c --> %d | ", 96, isalnum(96));
	printf("asm:%c --> %d\n", 96, ft_isalnum(96));

	printf("normal:%c --> %d | ", 97, isalnum(97));
	printf("asm:%c --> %d\n", 97, ft_isalnum(97));

	printf("normal:%c --> %d | ", 98, isalnum(98));
	printf("asm:%c --> %d\n", 98, ft_isalnum(98));

	printf("normal:%c --> %d | ", 121, isalnum(121));
	printf("asm:%c --> %d\n", 121, ft_isalnum(121));

	printf("normal:%c --> %d | ", 122, isalnum(122));
	printf("asm:%c --> %d\n", 122, ft_isalnum(122));

	printf("normal:%c --> %d | ", 123, isalnum(123));
	printf("asm:%c --> %d\n", 123, ft_isalnum(123));

}

void	test_isascii(void)
{
	printf("\nisascii\n");

	printf("normal: %c --> %d | ", -1, isascii(-1));
	printf("asm: %c --> %d\n", -1, ft_isascii(-1));

	printf("normal: %c --> %d | ", 0, isascii(0));
	printf("asm: %c --> %d\n", 0, ft_isascii(0));

	printf("normal: %c --> %d | ", 1, isascii(1));
	printf("asm: %c --> %d\n", 1, ft_isascii(1));

	printf("normal: %c --> %d | ", 126, isascii(126));
	printf("asm: %c --> %d\n", 126, ft_isascii(126));

	printf("normal: %c --> %d | ", 127, isascii(127));
	printf("asm: %c --> %d\n", 127, ft_isascii(127));

	printf("normal: %c --> %d | ", 128, isascii(128));
	printf("asm: %c --> %d\n", 128, ft_isascii(128));
}

void	test_isprint(void)
{
	printf("\nisprint\n");

	printf("normal: %c --> %d | ", 31, isprint(31));
	printf("asm: %c --> %d\n", 31, ft_isprint(31));

	printf("normal: %c --> %d | ", 32, isprint(32));
	printf("asm: %c --> %d\n", 32, ft_isprint(32));

	printf("normal: %c --> %d | ", 33, isprint(33));
	printf("asm: %c --> %d\n", 33, ft_isprint(33));

	printf("normal: %c --> %d | ", 126, isprint(126));
	printf("asm: %c --> %d\n", 126, ft_isprint(126));

	printf("normal: %c --> %d | ", 127, isprint(127));
	printf("asm: %c --> %d\n", 127, ft_isprint(127));

	printf("normal: %c --> %d | ", 128, isprint(128));
	printf("asm: %c --> %d\n", 128, ft_isprint(128));
}

void	test_toupper(void)
{
	printf("\ntoupper\n");

	printf("normal: %c --> %c | ", 96, toupper(96));
	printf("asm: %c --> %c\n", 96, ft_toupper(96));

	printf("normal: %c --> %c | ", 97, toupper(97));
	printf("asm: %c --> %c\n", 97, ft_toupper(97));

	printf("normal: %c --> %c | ", 98, toupper(98));
	printf("asm: %c --> %c\n", 98, ft_toupper(98));

	printf("normal: %c --> %c | ", 121, toupper(121));
	printf("asm: %c --> %c\n", 121, ft_toupper(121));

	printf("normal: %c --> %c | ", 122, toupper(122));
	printf("asm: %c --> %c\n", 122, ft_toupper(122));

	printf("normal: %c --> %c | ", 123, toupper(123));
	printf("asm: %c --> %c\n", 123, ft_toupper(123));
}

void	test_tolower(void)
{
	printf("\ntolower\n");

	printf("normal: %c --> %c | ", 64, tolower(64));
	printf("asm: %c --> %c\n", 64, ft_tolower(64));

	printf("normal: %c --> %c | ", 65, tolower(65));
	printf("asm: %c --> %c\n", 65, ft_tolower(65));


	printf("normal: %c --> %c | ", 66, tolower(66));
	printf("asm: %c --> %c\n", 66, ft_tolower(66));

	printf("normal: %c --> %c | ", 89, tolower(89));
	printf("asm: %c --> %c\n", 89, ft_tolower(89));


	printf("normal: %c --> %c | ", 90, tolower(90));
	printf("asm: %c --> %c\n", 90, ft_tolower(90));


	printf("normal: %c --> %c | ", 91, tolower(91));
	printf("asm: %c --> %c\n", 91, ft_tolower(91));
}

void	test_strlen(void)
{
	printf("\nstrlen\n");

	char	str[6] = "abcde";
	printf("str = %s\n", str);
	printf("len normal: %d | ", strlen(str));
	printf("len asm: %d\n", ft_strlen(str));

	char	str2[2] = "a";
	printf("str = %s\n", str2);
	printf("len normal: %d | ", strlen(str2));
	printf("len asm: %d\n", ft_strlen(str2));
}

void	test_puts(void)
{
	printf("\nputs\n");
	char * fucku = NULL;

	printf("%d\n", ft_puts("foo bar baz"));
	printf("%d\n", ft_puts(fucku));
}

void	test_strcat(void)
{
	printf("\nstrcat\n");

	char		toast[7] = "abc";
	char		chips[4] = "def";

	toast[3] = '\0';
	toast[6] = '\0';

	printf("string 1 = %s\n", toast);
	printf("string 2 = %s\n", chips);
	printf("  result = %s\n", ft_strcat(toast, chips));

}

void	test_memset(void)
{
	printf("\nmemset\n");

	char	mems[4];

	ft_bzero(mems, 4);
	printf("str[0] = %d\n", mems[0]);
	printf("str[1] = %d\n", mems[1]);
	printf("str[2] = %d\n", mems[2]);
	printf("str[3] = %d\n", mems[3]);
	printf("--- memseting with 'a' ---\n");
	ft_memset(mems, 'a', 4);
	printf("str[0] = %c (%d)\n", mems[0], mems[0]);
	printf("str[1] = %c (%d)\n", mems[1], mems[1]);
	printf("str[2] = %c (%d)\n", mems[2], mems[2]);
	printf("str[3] = %c (%d)\n", mems[3], mems[3]);
}

void	test_memcpy (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_memcpy
	** -------------------------------------------------------------------------
	**/
	printf("\nmemcpy\n");

	char	memc1[10]	= "123456789";
	char	memc2[5]	= "abcd";

	printf("str1 = %s\n", memc1);
	printf("str2 = %s\n", memc2);
	printf("str1 : %3d %3d %3d %3d %3d\n", memc1[0], memc1[1], memc1[2], memc1[3], memc1[4]);
	printf("str2 : %3d %3d %3d %3d %3d\n", memc2[0], memc2[1], memc2[2], memc2[3], memc2[4]);
	printf("--- memcpy str 2 into str 1, on 3 characters ---\n");
	ft_memcpy(memc1, memc2, 3);
	printf("str1 = %s\n", memc1);
	printf("str2 = %s\n", memc2);
	printf("str1 : %3d %3d %3d %3d %3d\n", memc1[0], memc1[1], memc1[2], memc1[3], memc1[4]);
	printf("str2 : %3d %3d %3d %3d %3d\n", memc2[0], memc2[1], memc2[2], memc2[3], memc2[4]);
	printf("test with int\n");

	int a = 5;
	int b = 4;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("--- memcpy a into b ---\n");
	ft_memcpy(&b, &a, sizeof(int));
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

void	test_strdup (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_strdup
	** -------------------------------------------------------------------------
	**/

	printf("\nstrdup\n");

	char * tata = strdup("yolo");
	char * toto = ft_strdup(tata);
	char * titi = NULL;

	printf(" original string : [%p] [%s]\n", tata, tata);
	printf("duplicate string : [%p] [%s]\n", toto, toto);

	printf("test with null :\n");
	printf("titi = %s\n", titi);
	titi = ft_strdup(NULL);
	printf("titi = %s\n", titi);

}

void	test_cat(void)
{
	printf("\ncat\n");

	int		fd;
	fd = open("test.txt", O_RDONLY);
	ft_cat(fd);
}
