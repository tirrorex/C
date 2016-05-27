/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   progtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 23:14:33 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/01 23:39:28 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}


void ft_print_reverse_alphabet(void)
{
    char z;

    z ='z';
    while (z >='a')
    {
		ft_putchar(z);
		z--;
    }
}

void ft_print_numbers(void)
{
    char a;

    a ='0';
    while (a <='9')
    {
		ft_putchar(a);
		a++;
    }
}

void ft_is_negative(int n)
{
    char a;

    a = 'N';
    char b;

    b = 'P';
    if (n >= 0)
    {
        ft_putchar(b);
    }
    else
    {
        ft_putchar(a);
    }
}

void    ft_print_comb_sec(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (a != '7' || b != '8' || c != '9')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ft_print_comb_sec(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}
int main(void)
{
	ft_print_comb();
		return (0);
}
