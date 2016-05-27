/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcecchin <gcecchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 02:14:06 by gcecchin          #+#    #+#             */
/*   Updated: 2014/08/15 03:53:11 by gcecchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_del_space(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	i -= 1;
	while (str[i] == ' ' && i >= 0)
		--i;
	str[i + 1] = 0;
	i = 0;
	while (str[i] == ' ' && str[i])
		++i;
	return (str + i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (-1);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		++i;
	}
	return (str);
}

int		ft_spy(char *str)
{
	str = ft_del_space(str);
	str = ft_strlowcase(str);
	if (!(ft_strcmp(str, "president")) || !(ft_strcmp(str, "attack"))
		|| !(ft_strcmp(str, "powers")))
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (ft_spy(av[i]))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		++i;
	}
	return (0);
}
