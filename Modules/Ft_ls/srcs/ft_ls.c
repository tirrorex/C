/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 22:00:45 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/29 22:07:46 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_ls(t_data *data)
{
	int		i;

	i = 0;
	if (data->nb_params == 0)
		ft_sort_dir(data, CURRENTDIR);
	else
	{
		while (i < data->nb_params)
		{
			ft_sort_dir(data, ft_strjoin(data->params[i], "/"));
			i++;
		}
	}
}
