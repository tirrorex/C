/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sats.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 22:36:57 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/03 22:37:31 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        ++i;
    return (i);
}

void    ft_putendl(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        ++i;
    }
    write(1, "\n", 1);
}

int ft_power(int len)
{
    int i;
    int j;

    i = 1;
    j = 1;
    while (j < len)
    {
        i *= 10;
        j++;
    }
    return (i);
}

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int ft_atoi(char *str)
{
    int nb;
    int i;
    int j;
    int k;
    int isneg;

    nb = 0;
    isneg = str[0] == '-' ? -1 : 0;
    k = ft_power(ft_strlen(str) + isneg); 
    j = isneg == -1 ? 1 : 0;
    while (str[j] && is_number(str[j]))
    {
        i = 0;
        while (('0' + i) < str[j])
            i++;
        nb = nb + i * k;
        k /= 10;
        j++;
    }
    if (isneg == -1)
        return (nb * -1);
    else
        return (nb);
}

void    print_door(int length, int step, int size)
{
    int i;
    int k;

    i = 0;
    if (size >= 7)
        k = size < 9 ? 7 : 9;
    else
        k = size < 5 ? 3 : 5;
    while (i < length)
    {
        if (size == 1 && i == 2)
            write(1, "|", 1);
        else if (size != 1 && ((i * 2) + k) >= length && k)
        {
			if (size >= 5 && k == 2 && ((step * 2) == size + 1 || (step * 2) == size))
				write(1, "$", 1);
			else
				write(1, "|", 1);
            --k;
        }
        else
            write(1, "*", 1);
        ++i;
    }
}

void    print_stars(int length, int size)
{
    int i;

    i = 0;
    while (i < length)
    {
        write(1, "*", 1);
        ++i;
    }
}

void    print_space(int max_linesize)
{
    int i;

    i = 0;
    while (i < max_linesize)
    {
        write(1, " ", 1);
        ++i;
    }
}

int     twerk(int k, int size)
{
    if (size == 1)
        return (k + (size / 2) + 1);
    if (size >= 4 && size < 6)
        return (k + (size / 2) - (size / 3));
    if (size == 6)
        return (k + (size / 2) + 1);
    if (size == 7)
        return (k + size);
    if (size == 8)
        return (k + size + 3);
    if (size == 9)
        return (k + size + 7);
    else
        return (k + (size / 2));
}

void    print_floor(int i, int size, int max_linesize, int step)
{
    int h;
    static int k;
    int p;
    static int count;

    h = 0;
    p = step;
    if (i)
        k += count < 3 ? 2 : 3;
    while (h < p)
    {
        print_space((max_linesize / 2) - twerk(k, size));
        write(1, "/", 1);
        if (p - h <= size && count + 1 == size)
            print_door(((k * 2) + 1), (p - h), size);
        else
            print_stars(((k * 2) + 1), size);
        ft_putendl("\\");
        --step;
        ++h;
        ++k;
    }
    ++count;
}

void    sastantua(int size)
{
    int i;
    int total;
    int max_height;
    int max_linesize;
    int step[size];

    total = 0;
    while (total < size)
    {
        max_height = total + 3;
        step[total] = max_height;
        total++;
    }
    if (size == 1 || size == 5)
        max_linesize = max_height * (size * 2) + 1;
    else
        max_linesize = max_height * (size * 2) + 3;
    i = 0;
    write(1, "\n", 1);
    while (i < size)
    {
        print_floor(i, size, max_linesize, step[i]);
        ++i;
    }
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    if (ft_atoi(av[1]) > 9)
    {
        write(1, "FUCK YOU. NO BIGGER THAN 9 PLEASE\n", 35);
        return (0);
    }
    if (ft_atoi(av[1]))
        sastantua(ft_atoi(av[1]));
    else
        return (0);
    return (0);
}
