/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 14:36:08 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/06 19:49:55 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_test_maj(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	ft_test_min(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;
	while (str[cpt] != '\0')
	{
		if (!(ft_test_maj(str[cpt])) && (i == 0))
		{
			str[cpt] = (str[cpt] - 32);
		}
		else if (!(ft_test_min(str[cpt])) && (i == 1))
		{
			str[cpt] = (str[cpt] + 32);
		}
		if ((str[cpt] = ' '))
			i = 0;
		else
			i = 1;
		cpt++;
	}
	return (str);
}
