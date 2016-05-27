/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:29:38 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/04 20:00:54 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

typedef struct		s_list
{
	void			*content;
	size_t			c_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t c_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_after(t_list *lst, t_list *new);
t_list				*ft_lstpush_front(t_list **alst, void const *content,
		size_t c_size);
t_list				*ft_lstpush_after(t_list *lst, void const *content,
		size_t c_size);
t_list				*ft_lstpush_back(t_list **alst, void const *content,
		size_t c_size);
t_list				*ft_lstln_front(t_list **alst, void const *content,
		size_t c_size);
t_list				*ft_lstln_after(t_list *lst, void const *content,
		size_t c_size);
t_list				*ft_lstln_back(t_list **alst, void const *content,
		size_t c_size);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstln(void const *content, size_t c_size);
int					ft_lstlen(t_list *lst);
void				**ft_lsttotab(t_list *lst);

#endif
