/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 05:34:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 11:46:03 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list != NULL)
	{
		while (begin_list->next != NULL)
		{
			(*f)(begin_list->data);
			begin_list = begin_list->next;
		}
		(*f)(begin_list->data);
	}
}
