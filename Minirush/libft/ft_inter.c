/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 09:35:24 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 09:41:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_comp_char(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s2);
	while (s1[i])
	{
		if (ft_comp_char(s1, s1[i], i) == 1)
		{
			if (ft_comp_char(s2, s1[i], j) == 0)
				write(1, &s1[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
