/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othassai <othassai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 17:29:23 by othassai          #+#    #+#             */
/*   Updated: 2014/08/03 18:38:02 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int n;
	int sign;
	
	i = 0;
	n = 0;
	sign = 1;
	if (str[0] == '-')
	{
		i = 1;
		sign = - 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = 10 * n + s[i] - '0';
		i++;
	}
	n = n * sign;
	return (n);
}