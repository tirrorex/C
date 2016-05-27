/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 20:34:00 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/06 21:14:02 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int cpt;
	int i;
	int size;

	cpt = 0;
	i = 0;
	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str); 
	while (str[cpt])
	{
		while (to_find[i] == str[cpt + i])
		{
			if (i == size - 1)
				return (str + cpt);
			i++;
		}
		i = 0;
		cpt++;
	}
	return (0);
}
