/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 13:58:24 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/07 18:27:40 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(int argc, char **argv)
{
	int z;
	int i;

	z = 1;
	i = 0;
	while (i < argc)
		i++;
	if (argc >= 2)
		while (z < argc)
		{
			ft_rev_params(argv[i - 1]);
			ft_putchar('\n');
			z++;
			i--;
		}
	return (0);
}
