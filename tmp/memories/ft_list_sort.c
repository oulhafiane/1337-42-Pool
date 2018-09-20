/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 22:56:56 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 11:19:43 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_print_adresses(t_list *e2)
{
	while (e2->next != NULL)
	{
		printf("Ajo nchofo %p ==> next dyalha ==> %p\n", e2, e2->next);
		e2 = e2->next;
	}
	printf("Ajo nchofo %p ==> next dyalha ==> %p\n", e2, e2->next);
}

void	ft_print_all(t_list *e2)
{
	while (e2->next != NULL)
	{
		printf("%s | ", e2->data);
		e2 = e2->next;
	}
	printf("%s\n", e2->data);
}

int		ft_list_swap(t_list **last, t_list **first, t_list *e, int is_first)
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

t_list	*ft_list_next(t_list **e)
{
	t_list *last;

	last = e[0];
	e[0] = e[0]->next;
	return (last);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*first;
	t_list	*last;
	int		edited;
	int		is_first;

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
				edited = ft_list_swap(&last, &first, begin_list[0], is_first);
			else
				last = ft_list_next(&begin_list[0]);
			is_first = 0;
		}
	}
	begin_list[0] = first;
}