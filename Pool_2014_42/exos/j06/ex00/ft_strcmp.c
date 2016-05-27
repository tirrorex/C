/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 13:21:19 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/07 13:25:37 by tnoah            ###   ########.fr       */
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
	}
	return (0);
}
