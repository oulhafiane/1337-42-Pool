/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 23:54:03 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 09:10:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	if (begin_list == NULL)
		return ;
	if (begin_list[0] != NULL)
	{
		elem = ft_create_elem(data);
		elem->next = begin_list[0];
		begin_list[0] = elem;
	}
	else
		begin_list[0] = ft_create_elem(data);
}
