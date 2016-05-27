#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(void)
{
	char	*path;

	path = (char*)malloc(sizeof(char) * 1025);
	getcwd(path, 1024);
	printf("%s\n", path);
	return (0);
}
