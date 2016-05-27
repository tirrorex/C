#include "list.h"

t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list		*tmp;
	int			temp;

	tmp = lst;
	while (lst)
	{
		if (lst->next && (*cmp)(lst->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (tmp);
}
