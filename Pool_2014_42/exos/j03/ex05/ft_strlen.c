/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 06:57:21 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/03 07:37:25 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		t_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
		cpt++;
	return(cpt);
}
