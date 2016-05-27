/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlivarto <nlivarto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/01 01:24:39 by nlivarto          #+#    #+#             */
/*   Updated: 2014/08/01 23:10:26 by nlivarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_value(int first, int second)
{
	ft_write_one(second);
	ft_putchar(' ');
	ft_write_one(first);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_write_one(int number)
{
	int only_one;

	only_one = number % 10;
	number = number / 10;
	ft_putchar('0' + number);
	ft_putchar('0' + only_one);
}

void	ft_print_comb2(void)
{
	int first_val;
	int second_val;

	first_val = 0;
	second_val = 0;
	while (second_val <= 99)
	{
		while (first_val <= 99)
		{
			if ((first_val > second_val) && (first_val + second_val != 197))
			{
				ft_write_value(first_val, second_val);
			}
			first_val = first_val + 1;
		}
		first_val = 0;
		second_val = second_val + 1;
	}
	ft_write_one(98);
	ft_putchar(' ');
	ft_write_one(99);
}
