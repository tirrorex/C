/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerbaud <cgerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 20:29:19 by cgerbaud          #+#    #+#             */
/*   Updated: 2014/08/14 23:20:43 by cgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			<fcntl.h>
#include			<stdlib.h>
#include			"ft_tail.h"

static char			ft_generate_chain(const int fd, t_chain *const cstr)
{
	t_chain			*cptr;

	cptr = cstr;
	while ((cptr->size = read(fd, cptr->buff, READ_SIZE)) == READ_SIZE)
	{
		if (!(cptr->next = malloc(sizeof(*cptr))))
			return (0);
		cptr = cptr->next;
	}
	cptr->next = 0;
	return (1);
}

static char			*ft_convert_chain_to_str(t_chain *start,
											unsigned int *const len)
{
	t_chain			*tmp;
	unsigned int	count[2];
	char			*ret;

	tmp = start;
	count[0] = 0;
	while (tmp)
	{
		count[0] += tmp->size;
		tmp = tmp->next;
	}
	if (!(ret = malloc(sizeof(*ret) * (count[0] + 1))))
		return (0);
	tmp = start;
	count[1] = -1;
	while (tmp)
	{
		count[0] = -1;
		while (++count[0] < tmp->size)
			ret[++count[1]] = tmp->buff[count[0]];
		tmp = tmp->next;
	}
	ret[count[1]] = 0;
	*len = count[1];
	return (ret);
}

void				ft_tail(const char *const filename, const unsigned int size,
							const char flag)
{
	int				fd;
	unsigned int	len;
	t_chain			cstr;
	char			*str;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return ;
	if (flag)
	{
		write(1, "==> ", 4);
		len = -1;
		while (filename[++len])
			;
		write(1, filename, len);
		write(1, " <==\n", 5);
	}
	if (!(ft_generate_chain(fd, &cstr)))
		return ;
	close(fd);
	if (!(str = ft_convert_chain_to_str(&cstr, &len)))
		return ;
	write(1, str + (len - (size - 1)), (size - 1));
	write(1, "\n", 1);
}
