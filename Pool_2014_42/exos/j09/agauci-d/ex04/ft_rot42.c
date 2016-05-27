/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot42.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 22:13:31 by agauci-d          #+#    #+#             */
/*   Updated: 2014/08/14 22:43:54 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			str[i] = str[i] + 16;
		else if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] = str[i] - 10;
		else if (str[i] >= 'a' && str[i] <= 'j')
			str[i] = str[i] + 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}
