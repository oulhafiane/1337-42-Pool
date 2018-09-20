/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 03:02:24 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 23:56:14 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_swap(void **next, void **tmp2,
		t_list **tmp, t_list **begin_list)
{
	while (begin_list[0]->next != NULL)
	{
		*next = begin_list[0]->next;
		*tmp2 = *tmp;
		*tmp = *begin_list;
		begin_list[0]->next = *tmp2;
		*begin_list = *next;
	}
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*tmp;
	void	*tmp2;
	void	*next;
	t_list	*first;
	t_list	*last;

	if (begin_list != NULL)
	{
		first = begin_list;
		last = NULL;
		last = begin_list->next;
		next = begin_list;
		tmp = NULL;
		list_swap(&next, &tmp2, &tmp, &begin_list);
		begin_list->next = tmp;
		if (last != NULL)
			last->next = begin_list;
		last = first->next;
		tmp2 = first->data;
		first->data = begin_list->data;
		first->next = begin_list->next;
		begin_list->data = tmp2;
		begin_list->next = NULL;
	}
}
