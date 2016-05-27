/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 18:58:52 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/06 21:23:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpt;

	cpt = 0;
	while ((src[cpt] != '\0') && cpt <= n)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	return (dest);
}
