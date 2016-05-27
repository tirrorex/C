/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <tnoah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:46:32 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 11:00:36 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_split_word(char **str, char *s, char c, size_t len)
{
	unsigned int		i;
	unsigned int		k;
	unsigned int		j;

	i = 0;
	j = 0;
	k = 0;
	while (i < len)
	{
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
		{
			k++;
			j++;
		}
		if ((str[i] = ft_strsub(s, j - k, k)) == NULL)
			return (0);
		i++;
		k = 0;
	}
	str[i] = 0;
	return (1);
}

static size_t	ft_split_count(char *s, char c)
{
	size_t		word;
	int			i;

	word = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		++word;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		len;

	str = NULL;
	if (s)
	{
		len = ft_split_count((char*)s, c);
		if ((str = (char**)malloc(sizeof(char*) * (len + 1))) == NULL)
			return (NULL);
		if (ft_split_word(str, (char*)s, c, len))
			return (str);
		else
		{
			free(str);
			str = NULL;
		}
		return (str);
	}
	return (NULL);
}
