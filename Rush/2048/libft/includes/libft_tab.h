/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tab.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:30:58 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/13 17:12:32 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TAB_H
# define LIBFT_TAB_H

size_t		ft_tablen(void *tab);
char		**ft_tabjoin(char **tab, char const *s);
void		ft_tabdel(char **tab);
void		ft_tabdel_array(char **tab, int i);
char		**ft_tabcpy(char **str);
t_list		*ft_tabtolst(char **tab);

#endif
