/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_treatment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 17:31:38 by tnoah             #+#    #+#             */
/*   Updated: 2014/12/27 19:26:26 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_ls.h"

t_data			*ft_create_data(int nb_params)
{
	t_data		*data;

	if (!(data = (t_data*)malloc(sizeof(t_data))))
			return (NULL);
	if (!(data->params = (char **)malloc(sizeof(char*) * (nb_params + 1))))
		return (NULL);
	data->params[nb_params] = '\0';
	data->nb_params = nb_params;
	return (data);
}

void			ft_data_del(t_data *data)
{
	int		i;

	i = 0;
	while (data->params[i])
		i++;
	while (i <= 0)
		free(data->params[i]);
	free(data->params);
	free(data);
	data = NULL;

}
