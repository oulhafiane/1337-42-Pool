/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 23:25:05 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 09:10:30 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*cpy;

	if (begin_list == NULL)
		return ;
	if (begin_list[0] != NULL)
	{
		cpy = begin_list[0];
		while (begin_list[0]->next != NULL)
			begin_list[0] = begin_list[0]->next;
		elem = ft_create_elem(data);
		begin_list[0]->next = elem;
		begin_list[0] = cpy;
	}
	else
		begin_list[0] = ft_create_elem(data);
}
