#include <stdio.h>

int main()
{
	char	*str;

	str = "bonjour";
	while (*str++)
		printf("%o", *str);
	printf("[%hhd,%hhd]\n", -42, 1000);
}
