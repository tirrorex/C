/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 18:19:18 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/06 21:58:25 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int cpt;

	cpt = 0;
	while (s1[cpt] || s2[cpt])
	{
		if (s1[cpt] < s2[cpt])
			return (-1);
		if (s1[cpt] > s2[cpt])
			return (1);
		cpt++;
	}
	return (0);
}
