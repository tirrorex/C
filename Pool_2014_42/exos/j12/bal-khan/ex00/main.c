/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bal-khan <bal-khan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 00:57:32 by bal-khan          #+#    #+#             */
/*   Updated: 2014/08/14 00:57:34 by bal-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int		fd;
	int		a;
	int		ret;
	char	buff2[190000];

	a = 0;
	if (argc < 1)
	{
		write(1, "File name missing", 17);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments", 18);
	}
	fd = open(argv[1], O_RDONLY);
	ret = lseek(fd, 1, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	read(fd, buff2, ret);
	while (buff2[a])
	{
		write(1, &buff2[a], 1);
		a++;
	}
	close(fd);
	return (0);
}
