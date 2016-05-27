/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 19:37:27 by wyeo              #+#    #+#             */
/*   Updated: 2014/08/16 16:21:01 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_time(int hour)
{
	char time;

	hour = hour % 24;
	if (hour >= 12 && hour != 24)
		time = 'P';
	else
		time = 'A';
	hour = hour % 12;
	if (hour == 0)
		hour = 12;
	printf("%d.00 %c.M.", hour, time);
}

void	ft_takes_places(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_print_time(hour);
	printf(" AND ");
	ft_print_time(hour + 1);
	printf("\n");
}

int		main(void)
{
	ft_takes_places(24);
	ft_takes_places(1);
	ft_takes_places(11);
	ft_takes_places(12);
	ft_takes_places(23);
	ft_takes_places(15);
	ft_takes_places(14);
	ft_takes_places(13);
	ft_takes_places(2);
	ft_takes_places(3);
	ft_takes_places(4);
	ft_takes_places(5);
	return (0);
}
