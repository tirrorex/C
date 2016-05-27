/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 17:34:20 by tnoah             #+#    #+#             */
/*   Updated: 2014/08/10 22:49:33 by othassai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	int **sudoku;

	if (argc == 10)
	{
		if (!ft_check(argv))
			return (write(2, "Erreur\n", 8));
		sudoku = ft_chartoint(argv);
		ft_resolve(sudoku, 0, 1);
		ft_aff(sudoku);
	}
	else
		write(2, "Erreur\n", 8);
	return (0);
}
