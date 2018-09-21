/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 05:44:43 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 00:22:02 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (begin_list != NULL)
	{
		while (begin_list->next != NULL)
		{
			if ((*cmp)(begin_list->data, data_ref) == 0)
				(*f)(begin_list->data);
			begin_list = begin_list->next;
		}
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
	}
}
