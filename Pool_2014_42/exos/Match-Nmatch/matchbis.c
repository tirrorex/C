/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 14:28:00 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/10 17:58:46 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int value;

	printf("str1 = %s, str2 = %s\n", s1, s2);
	if (*s1 == '\0' && *s2 == '\0')
		value = 1;
	else if (*s1 == '\0' && *s2 == '*')
		value = (match(s1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		value = (match(s1 + 1, s2));
	else if (*s1 == *s2)
		value = (match(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		value = ((match(s1, s2 + 1)) + ( match(s1 +1, s2)));
	printf("valeur = %d", value);
	return (value);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		if (match(argv[1], argv[2]))
			printf("match\n");
		else
			printf("no match\n");
	}
	return (0);
}
