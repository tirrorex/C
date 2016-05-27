/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 14:28:00 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/10 17:26:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int value;

	value = 0;
	if (*s1 == '\0' && *s2 == '\0')
		value = 1;
	else if (*s1 == '\0' && *s2 == '*')
		value = (match(s1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		value = (match(s1 + 1, s2));
	else if (*s1 == *s2)
		value = (match(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		value = (match(s1, s2 + 1) || match(s1 + 1, s2));
	return (value);
}
