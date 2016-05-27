/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 06:34:41 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/03 07:38:28 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while ( str[cpt] != '\0')
	{
		ft_puchar(str[cpt]);
		cpt++;
	}
}