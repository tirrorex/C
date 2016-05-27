/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttotab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 19:52:39 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 20:01:03 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			**ft_lsttotab(t_list *lst)
{
	int			size;
	void		**tab;
	int			i;
	t_list		*next;

	tab = NULL;
	if (lst)
	{
		size = ft_lstlen(lst);
		if ((tab = (void**)malloc(sizeof(void*) * (size + 1))))
		{
			i = 0;
			while (i < size)
			{
				tab[i] = lst->content;
				next = lst->next;
				free(lst);
				lst = next;
				i++;
			}
			tab[i] = NULL;
		}
	}
	return (tab);
}
