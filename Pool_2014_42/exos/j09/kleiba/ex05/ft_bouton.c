/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 23:13:51 by kleiba            #+#    #+#             */
/*   Updated: 2014/08/14 23:49:40 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if (i < k && i > j)
		return (i);
	else if (i > k && i < j)
		return (i);
	else if (k < j && k > i)
		return (k);
	else if (k > j && k < i)
		return (k);
	else if (j < k && j > i)
		return (j);
	else if (j > k && j < i)
		return (j);
	else
		return (0);
}
