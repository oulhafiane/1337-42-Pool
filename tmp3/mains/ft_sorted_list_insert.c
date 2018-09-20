/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:49:56 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 23:40:01 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;
	if (begin_list != NULL && begin_list[0] != NULL)
	{
		elem = ft_create_elem(data);
		while (elem->next != NULL)
		{
			if ((*cmp)(begin_list->elem->data, data) >= 0) 
			{
				elem->next = begin_list->next;
				begin_list->next = elem;
				break;
			}
			elem = elem->next;
		}
	}
}
