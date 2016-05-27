/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bal-khan <bal-khan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 04:37:36 by bal-khan          #+#    #+#             */
/*   Updated: 2014/08/14 04:37:38 by bal-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int		fd;
	int closer;
	int a;
	int b;
	int ret;
	char buff2[1];
	char buff1;
	void *buffering;
	buffering = buff2;
	buff1 = 'a';
	a = 1;
	if (argc < 2)
	{
		write(1, "File name missing", 17);
	}
	while (argv[a])
	{
	fd = open(argv[a] , O_RDONLY);
	ret = lseek(fd, -1, SEEK_END);
	read(fd, buff2, 1);
		while (buff2[1])
			{
				read(fd, buff2, 1);
				write(1, &buff2[1], 1);
				lseek(fd, -1, SEEK_CUR);
			}
			a++;
			closer = close(fd);
		}
	return (0);
}