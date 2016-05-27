/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   satstantua.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 08:06:09 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/04 15:46:45 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int repeat, int block, int size)
{
	int cpty;
	int cptx;

	i = 0;
	while (i < repeat)
	{
		if ((2 + size) * size) 
		i++;
	}
}

void	sastantua(int size)
{
	int block;
	int floor;

	block = 0;
	floor = 3;
	if	(size == 1)
		ft_print_line(floor);
	else
		while (block < size)
		{
			ft_print_line(block + floor, block, size);
			block++;			
		}
}
