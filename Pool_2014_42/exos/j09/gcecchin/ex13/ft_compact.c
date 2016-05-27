/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcecchin <gcecchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 14:09:25 by gcecchin          #+#    #+#             */
/*   Updated: 2014/08/15 14:25:52 by gcecchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while ((i + j) < length)
	{
		if (tab[i] == 0)
		{
			j = 1;
			while (tab[i + j] == 0)
				++j;
			tab[i] = tab[i + j];
			tab[i + j] = 0;
		}
		++i;
	}
	i = 0;
	while (tab[i])
		++i;
	return (i);
}
