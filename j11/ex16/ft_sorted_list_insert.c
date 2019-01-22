/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:49:56 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 01:41:28 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ex_swap(t_list **last, t_list **first, t_list *e, int is_first)
{
	t_list *tmp;

	if (*last != NULL)
		last[0]->next = e->next;
	tmp = e->next->next;
	e->next->next = e;
	if (is_first == 1)
		*first = e->next;
	*last = e->next;
	e->next = tmp;
	return (1);
}

t_list	*ex_next(t_list **e)
{
	t_list *last;

	last = e[0];
	e[0] = e[0]->next;
	return (last);
}

void	sort(t_list **begin_list, int (*cmp)())
{
	t_list	*first;
	t_list	*last;
	int		edited;
	int		is_first;

	if (begin_list == NULL || begin_list[0] == NULL)
		return ;
	edited = 1;
	first = begin_list[0];
	while (edited == 1)
	{
		last = NULL;
		is_first = 1;
		edited = 0;
		begin_list[0] = first;
		while (begin_list[0]->next != NULL)
		{
			if ((*cmp)(begin_list[0]->data, begin_list[0]->next->data) > 0)
				edited = ex_swap(&last, &first, begin_list[0], is_first);
			else
				last = ex_next(&begin_list[0]);
			is_first = 0;
		}
	}
	begin_list[0] = first;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;

	elem = ft_create_elem(data);
	elem->next = begin_list[0];
	begin_list[0] = elem;
	sort(begin_list, (*cmp));
}
