/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcecchin <gcecchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 13:11:45 by gcecchin          #+#    #+#             */
/*   Updated: 2014/08/15 14:02:27 by gcecchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_num(int *tab, int length, int num)
{
	int		check;
	int		i;

	check = 0;
	i = 0;
	while (i < length)
	{
		if (tab[i] == num)
			++check;
		++i;
	}
	if (check % 2 == 1)
		return (1);
	return (0);
}

int		ft_unmatch(int *tab, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		if (ft_check_num(tab, length, tab[i]))
			return (tab[i]);
		++i;
	}
	return (0);
}
