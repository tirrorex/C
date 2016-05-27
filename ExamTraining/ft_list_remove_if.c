#include "ft_list.h"
#include <stdlib.h>

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*current;
	t_list		*previous;

	previous = 0;
	current = *begin_list;
	while (current)
	{
		if ((cmp)(current->data, data_ref) == 0)
		{
			if (previous == 0)
				*begin_list = current->next;
			else
				previous->next = current->next;
			free(current);
		}
		previous = current;
		current = current->next;
	}
}




#include <stdio.h>

void		ft_printlist(t_list *lst)
{
	while (lst)
	{
		printf("data : %d\n", (int)lst->data);
		lst = lst->next;
	}
}

t_list		*lst_new(void	*data)
{
	t_list		*lst;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->next = 0;
	lst->data = data;
	return (lst);
}

int			cmp(void *a, void *b)
{
	if ((int)a == (int) b)
		return (0);
	else
		return (1);
}

int		main(void)
{
	t_list		*lst;

/*	lst = lst_new((void*)5);
	lst->next = lst_new((void*)3);
	lst->next->next = lst_new((void*)30);
	lst->next->next->next = lst_new((void*)6);
	lst->next->next->next->next = lst_new((void*)9);
	lst->next->next->next->next->next = lst_new((void*)5);
	lst->next->next->next->next->next->next = lst_new((void*)2);
	lst->next->next->next->next->next->next->next = lst_new((void*)4);
	ft_printlist(lst);
*/	ft_list_remove_if(&lst, (void*)5, &cmp);
	printf("---------------------------------------\n");
	ft_printlist(lst);
	return (0);
}
