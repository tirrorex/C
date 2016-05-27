/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othassai <othassai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 16:41:59 by othassai          #+#    #+#             */
/*   Updated: 2014/08/03 17:28:54 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++]);
	return (i - 1);

}

char	*ft_strrev(char *str)
{
	int	i;
	int n;
	char BUFF;

	n = strlen(str) - 1;
	while (n - i > -1)
	{
		BUFF = str[i];
		str[i] = str[n];
		str[n] = BUFF;
		i++;
		n--;
		return (0);
	}
}
