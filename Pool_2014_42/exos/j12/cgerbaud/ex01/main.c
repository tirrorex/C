/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 20:10:02 by cgerbaud          #+#    #+#             */
/*   Updated: 2014/08/14 20:11:33 by cgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			<unistd.h>
#include			<fcntl.h>

#define	READ_SIZE	4096

static void			ft_display_file(const int fd)
{
	char			buff[READ_SIZE];
	unsigned int	ret;

	while ((ret = read(fd, buff, READ_SIZE)) > 0)
		write(1, buff, ret);
}

int					main(const int ac, const char *const *const av)
{
	unsigned int	iterator;
	int				fd;

	if (ac == 1)
		ft_display_file(0);
	else
	{
		iterator = 0;
		while (++iterator < (unsigned)ac)
		{
			if ((fd = open(av[iterator], O_RDONLY)) == -1)
				write(1, "Error\n", 6);
			else
			{
				ft_display_file(fd);
				close(fd);
			}
		}
	}
	return (1);
}
