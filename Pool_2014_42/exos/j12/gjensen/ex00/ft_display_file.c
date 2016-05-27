/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjensen <gjensen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 11:53:16 by gjensen           #+#    #+#             */
/*   Updated: 2014/08/14 17:33:48 by gjensen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define TABMAX 4

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_display_file(char *argv)
{
	int		fd;
	int		ret;
	char	buf[TABMAX + 1];

	fd = open(argv, O_RDONLY);
	ret = read(fd, buf, TABMAX);
	if (fd == -1)
	{
		write(2, "open failed \n", 14);
		return (1);
	}
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, TABMAX);
	}
	if (close(fd) == -1)
	{
		write(2, "close failed", 12);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_display_file(argv[1]);
	}
	else if (argc < 2)
	{
		write (2, "File name missing.\n", 20);
	}
	else if (argc > 2)
	{
		write (2, "Too many arguments.\n", 21);
	}
	return (0);
}
