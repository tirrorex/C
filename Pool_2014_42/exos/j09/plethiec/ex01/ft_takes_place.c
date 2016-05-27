/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plethiec <plethiec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 21:11:05 by plethiec          #+#    #+#             */
/*   Updated: 2014/08/15 01:03:15 by plethiec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour < 0 && hour > 24)
		printf("24h format pls");
	if (hour >= 0 && hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d A.M. AND %d A.M.",
				hour, (hour + 1));
	if ((hour == 11))
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11 A.M. AND 12 P.M.");
	if ((hour == 12))
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12 P.M. AND 1 P.M.");
	if (hour > 12 && hour < 23)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d P.M. AND %d P.M.",
				hour, (hour + 1));
	}
	if ((hour == 23))
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11 P.M. AND 12 A.M.");
}

int		main(void)
{
	ft_takes_place(13);
	return (0);
}
