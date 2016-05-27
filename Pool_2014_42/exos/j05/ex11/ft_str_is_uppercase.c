/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 22:27:21 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/05 22:48:21 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (!(ft_test(st[cpt])))
		{
			return (0);
		}
		cpt++;
	}
	return (1);
}
