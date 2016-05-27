#include "get_next_line.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include "libft/includes/libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*line;
	int		fd;

	(void)ac;
	(void)av;
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
	}
	return (0);
}
