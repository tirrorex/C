/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjoncture.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 01:11:30 by agauci-d          #+#    #+#             */
/*   Updated: 2014/08/15 14:19:28 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_collatz_conjecture(unsigned int base)
{
	unsigned int nb;

	nb = base;
	if (base == 1 || base == 0)
		return (0);
	if (nb != 1)
	{
		if (nb % 2 == 0)
			return (1 + ft_collatz_conjecture(nb / 2));
		else if (nb % 2 != 0)
			return (1 + ft_collatz_conjecture((nb * 3) + 1));
	}
	return (0);
}
