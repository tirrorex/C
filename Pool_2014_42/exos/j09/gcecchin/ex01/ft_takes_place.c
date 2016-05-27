/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcecchin <gcecchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 20:52:25 by gcecchin          #+#    #+#             */
/*   Updated: 2014/08/14 21:38:55 by gcecchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*s;

	s = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour >= 0 && hour <= 23)
	{
		if (hour == 0)
			printf("%s 12.00 AM AND 1.00 AM\n", s);
		else if (hour >= 1 && hour <= 10)
			printf("%s %d.00 AM AND %d.00 AM\n", s, hour, hour + 1);
		else if (hour == 11)
			printf("%s %d.00 AM AND %d.00 PM\n", s, hour, hour + 1);
		else if (hour == 12)
			printf("%s %d.00 PM AND %d.00 PM\n", s, hour, (hour + 1) % 12);
		else if (hour >= 13 && hour <= 22)
			printf("%s %d.00 PM AND %d.00 PM\n", s, hour % 12, (hour + 1) % 12);
		else if (hour == 23)
			printf("%s %d.00 PM AND 12.00 AM\n", s, hour % 12);
	}
	else
		printf("Hour must be between 0 and 23!\n");
}
