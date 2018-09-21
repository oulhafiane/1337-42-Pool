/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:49:56 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 01:31:14 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;
	t_list	*first;
	int		added;
	t_list	*tmp;

	if (begin_list != NULL && begin_list[0] != NULL)
	{
		added = 0;
		first = begin_list[0];
		elem = ft_create_elem(data);
		tmp = NULL;
		while (begin_list[0]->next != NULL)
		{
			if ((*cmp)(begin_list[0]->data, elem->data) >= 0)
			{
				elem->next = begin_list[0];
				if (tmp != NULL)
					tmp->next = elem;
				else
					first = elem;
				added = 1;
				break ;
			}
			tmp = begin_list[0];
			begin_list[0] = begin_list[0]->next;
		}
		if (added == 0 && (*cmp)(begin_list[0]->data, elem->data) >= 0)
		{
			tmp->next = elem;
			elem->next = begin_list[0];
		}
		else if (added == 0)
			begin_list[0]->next = elem;
		begin_list[0] = first;
	}
}
