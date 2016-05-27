/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtalloir <vtalloir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 16:45:02 by vtalloir          #+#    #+#             */
/*   Updated: 2014/08/05 16:45:03 by vtalloir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int	r;
	int	c;
	int o;

	r = 0;
	c = 1;
	o = nb;
	while (c++ < power && nb > 0 && power > 0)
	{
		r = nb * o;
		nb = r;
	}
	return (r);
}
