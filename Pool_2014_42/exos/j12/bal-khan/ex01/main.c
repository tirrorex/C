/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bal-khan <bal-khan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 03:34:29 by bal-khan          #+#    #+#             */
/*   Updated: 2014/08/14 03:34:29 by bal-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void		displayer(char *argv[], int a, int b, char buff2[])
{
	int	fd;
	int	ret;
	while (argv[a])
	{
		fd = open(argv[a], O_RDONLY);
		ret = lseek(fd, 0, SEEK_END);
		lseek(fd, 0, SEEK_SET);
		read(fd, buff2, ret);
		while (buff2[b])
		{
			write(1, &buff2[b], 1);
			b++;
		}
		a++;
		b = 0;
		close(fd);
	}
}

int			main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	buff2[32768];

	a = 1;
	b = 0;
	if (argc < 2)
	{
		write(1, "File name missing", 17);
	}
	displayer(argv, a, b, buff2);
	return (0);
}

