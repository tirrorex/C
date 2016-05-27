/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/16 13:19:00 by vroche            #+#    #+#             */
/*   Updated: 2014/08/17 19:17:52 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_display(int nbc, int cs, int l, int p)
{
	if (p >= 1)
	{
		ft_putstr(" || ");
	}
	ft_putstr("[colle-0");
	ft_putnbr(nbc);
	ft_putstr("] [");
	ft_putnbr(cs);
	ft_putstr("] [");
	ft_putnbr(l);
	ft_putstr("]");
}

void	ft_colle(int cs, int l, char *str, char *tab)
{
	int	p;

	p = 0;
	if ((ft_strcmp(str, colle00(cs, l, tab)) == 0) && ++p)
		ft_display(0, cs, l, p - 1);
	if (ft_strcmp(str, colle01(cs, l, tab)) == 0 && ++p)
		ft_display(1, cs, l, p - 1);
	if (ft_strcmp(str, colle02(cs, l, tab)) == 0 && ++p)
		ft_display(2, cs, l, p - 1);
	if (ft_strcmp(str, colle03(cs, l, tab)) == 0 && ++p)
		ft_display(3, cs, l, p - 1);
	if (ft_strcmp(str, colle04(cs, l, tab)) == 0 && ++p)
		ft_display(4, cs, l, p - 1);
	if (p == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

void	ft_treatment(char *str, int len)
{
	int		l;
	int		c;
	int		cs;
	int		i;
	char	*tab;

	l = 0;
	cs = 0;
	i = 0;
	str[len] = '\0';
	while (str[i])
	{
		c = 0;
		while (str[i] != '\n')
		{
			c++;
			i++;
		}
		l++;
		cs = c;
		i++;
	}
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return ;
	ft_colle(cs, l, str, tab);
}

int		main(void)
{
	t_list	*list;
	int		pos;
	int		len;
	char	buff[2];
	char	*str;

	len = 0;
	buff[1] = '\0';
	while ((pos = read(0, buff, 1)))
	{
		len += len + pos;
		if (list == NULL)
			list = ft_create_elem(buff);
		else
			ft_list_push_back(&list, buff);
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (list != NULL)
	{
		ft_strcat(str, list->str);
		list = list->next;
	}
	ft_treatment(str, len);
	return (0);
}
