/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 22:35:28 by wyeo              #+#    #+#             */
/*   Updated: 2014/08/16 16:43:53 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] > 'Z' - 16)
				str[i] = (str[i] - 26);
			str[i] = (str[i] + 16);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'z' - 16)
				str[i] = (str[i] - 26);
			str[i] = (str[i] + 16);
		}
		i = i + 1;
	}
	return (str);
}

int		main(void)
{
	char str[] = "bonjour";

	printf("%s", ft_rot42(str));
	return (0);
}
