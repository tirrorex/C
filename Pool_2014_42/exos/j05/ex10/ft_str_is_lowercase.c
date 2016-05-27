/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 22:22:54 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/05 22:48:05 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (!(ft_test(str[cpt])))
		{
			return (0);
		}
		cpt++;
	}
	return (1);
}
