/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 22:23:40 by tnoah             #+#    #+#             */
/*   Updated: 2014/11/28 15:53:05 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char				*str;

	if ((str = (char*)malloc(sizeof(char*) * (size + 1))) == NULL)
		return (NULL);
	if (str)
		ft_bzero((void*)str, size + 1);
	return (str);
}
