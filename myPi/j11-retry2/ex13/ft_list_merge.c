/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 22:13:12 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 09:09:16 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*cpy;

	if (begin_list1 == NULL)
		return ;
	if (begin_list1[0] != NULL)
	{
		cpy = begin_list1[0];
		while (cpy->next != NULL)
			cpy = cpy->next;
		cpy->next = begin_list2;
	}
	else
		begin_list1[0] = begin_list2;
}
