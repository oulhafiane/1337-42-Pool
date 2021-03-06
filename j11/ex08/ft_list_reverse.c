/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 03:02:24 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 13:20:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	void	*tmp;
	void	*tmp2;
	void	*next;

	if (begin_list != NULL && begin_list[0] != NULL)
	{
		next = begin_list[0];
		tmp = NULL;
		while (begin_list[0]->next != NULL)
		{
			next = begin_list[0]->next;
			tmp2 = tmp;
			tmp = begin_list[0];
			begin_list[0]->next = tmp2;
			begin_list[0] = next;
		}
		begin_list[0]->next = tmp;
	}
}
