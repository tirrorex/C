/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 17:38:53 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/05 18:31:46 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int factoriel;

	factoriel = 1;
	if (nb >= 0)
	{
		if (nb > 1)
		{
			while (nb >= 1)
			{
				factoriel *= nb;
				nb--;
			}
			return (factoriel);
		}
		return (1);
	}
	return (0);
}
