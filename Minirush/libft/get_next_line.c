/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:09:20 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/26 20:53:34 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char		*join_in_temp(char **tmp, char **buff)
{
	char	*temp;

	if ((temp = ft_strjoin(*tmp, *buff)) == NULL)
		return (NULL);
	return (temp);
}

static int			put_in_line(char **line, char **tmp)
{
	unsigned int		len;
	char				*temp;

	len = ft_strclen(*tmp, '\n') + 1;
	if (tmp[0][0] == '\n')
	{
		if ((*line = ft_strnew(1)) == NULL)
			return (-1);
	}
	else
	{
		if ((*line = ft_strsub(*tmp, 0, len)) == NULL)
			return (-1);
		line[0][len - 1] = '\0';
	}
	if ((temp = ft_strsub(*tmp, len, ft_strlen(*tmp) - len)) == NULL)
		return (-1);
	if (*tmp)
		free(*tmp);
	*tmp = temp;
	return (1);
}

int					get_next_line(int fd, char **line)
{
	static char		*tmp[256];
	char			*buff;
	int				ret;
	int				value;

	if ((ret = 2) && (fd < 0 || line == NULL))
		return (-1);
	while (ft_strchr(tmp[fd], '\n') == NULL && ret > 0)
	{
		if ((buff = ft_strnew(BUFF_SIZE)) == NULL)
			return (-1);
		ret = read(fd, buff, BUFF_SIZE);
		if ((tmp[fd] = join_in_temp(&tmp[fd], &buff)) == NULL)
			return (-1);
		free(buff);
	}
	if (ret == 0 || ret == -1)
	{
		if (tmp[fd] && *tmp[fd])
			put_in_line(line, &tmp[fd]);
		if (tmp[fd] && *tmp[fd])
			return (1);
		return (ret);
	}
	return (value = put_in_line(line, &tmp[fd]));
}
