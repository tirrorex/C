/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 20:00:20 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/17 20:01:20 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swao(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
