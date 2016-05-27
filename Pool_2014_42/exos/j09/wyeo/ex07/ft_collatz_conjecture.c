/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 01:09:41 by wyeo              #+#    #+#             */
/*   Updated: 2014/08/15 14:46:13 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1 || base == 0)
		return (0);
	if (base % 2 == 0)
		base = base / 2;
	else
		base = (base * 3) + 1;
	return (ft_collatz_conjecture(base) + 1);
}
