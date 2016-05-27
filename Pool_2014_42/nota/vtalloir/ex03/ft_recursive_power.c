/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtalloir <vtalloir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 16:45:15 by vtalloir          #+#    #+#             */
/*   Updated: 2014/08/05 16:45:16 by vtalloir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power >= 0 && nb > 0)
		return (power == 0) ? (nb) : (nb * ft_recursive_power(nb, --power));
	return (0);
}
