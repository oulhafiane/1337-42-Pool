/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 06:05:42 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 12:40:55 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list != NULL)
	{
		while (begin_list->next != NULL)
		{
			if ((*cmp)(begin_list->data, data_ref) == 0)
				return (begin_list);
			begin_list = begin_list->next;
		}
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		return (0);
	}
	return (NULL);
}
