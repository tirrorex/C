/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 23:40:27 by agauci-d          #+#    #+#             */
/*   Updated: 2014/08/15 00:41:17 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_bouton(int i, int j, int k)
{
	if (i == j && j == k)
		return (i);
	if (i == j || j == k)
		return (j);
	if (i == k || k == i)
		return (i);
	if ((i >= j && i <= k) || (i >= k && i <= j))
		return (i);
	if ((j >= i && j <= k) || (j >= k && j <= i))
		return (j);
	if ((k >= i && k <= j) || (k >= j && k <= i))
		return (k);
	return (0);
}
