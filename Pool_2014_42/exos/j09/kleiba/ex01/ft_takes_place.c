/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 19:07:35 by kleiba            #+#    #+#             */
/*   Updated: 2014/08/15 14:53:44 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 0 && hour < 11)
		printf ("THE FOLLOWING TAKES PLACE BETWEEN %i.00 A.M. AND %i.00 A.M.\n",
				hour, hour + 1);
	else if (hour == 11)
		printf
			("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf ("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	else if (hour > 12 && hour < 23)
		printf ("THE FOLLOWING TAKES PLACE BETWEEN %i.00 P.M. AND %i.00 P.M.\n",
				hour - 12, hour - 11);
	else if (hour == 23)
		printf
			("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 0)
		printf ("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	else
		printf ("Where do you live ? This hour does not exist\n");
}
