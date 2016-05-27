/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjensen <gjensen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 18:58:32 by gjensen           #+#    #+#             */
/*   Updated: 2014/08/14 23:33:12 by gjensen          ###   ########.fr       */
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

int		ft_cat(char *argv)
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

void	ft_print(void)
{
	int		ret;
	char	buf[TABMAX];

	ret = 1;
	while (ret)
	{
		ret = read(1, buf, TABMAX);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int compteur;

	if (argc == 1)
		ft_print();
	compteur = 1;
	while (compteur < argc)
	{
		ft_cat(argv[compteur]);
		compteur++;
	}
	return (0);
}
