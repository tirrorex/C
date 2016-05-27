/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 01:29:37 by kleiba            #+#    #+#             */
/*   Updated: 2014/08/15 01:51:34 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i = -1;

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	g_i++;
	if (base == 1)
		return (g_i);
	if (base % 2 != 0)
	{
		base = (base * 3) + 1;
		return (ft_collatz_conjecture(base));
	}
	base = base / 2;
	return (ft_collatz_conjecture(base));
}
