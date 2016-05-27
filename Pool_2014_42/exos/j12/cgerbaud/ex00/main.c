/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 20:07:28 by cgerbaud          #+#    #+#             */
/*   Updated: 2014/08/14 20:09:05 by cgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			<unistd.h>
#include			<fcntl.h>

#define READ_SIZE	4096

static void			ft_display_file(const char *const filename)
{
	char			buff[READ_SIZE];
	unsigned int	ret;
	int				fd;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return ;
	while ((ret = read(fd, buff, READ_SIZE)) == READ_SIZE)
		write(1, buff, ret);
	write(1, buff, ret);
	close(fd);
}

int					main(const int ac, const char *const *const av)
{
	if (ac == 2)
		ft_display_file(av[1]);
	else if (ac == 1)
		write(1, "File name missing.\n", 19);
	else
		write(1, "Too many arguments.\n", 20);
	return (1);
}
