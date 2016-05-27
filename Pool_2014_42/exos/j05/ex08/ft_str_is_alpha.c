/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 14:03:52 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/06 14:18:56 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_alpha(char *str)
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
