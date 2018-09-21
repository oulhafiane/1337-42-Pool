/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:14:14 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 12:38:41 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;

	if (begin_list != NULL)
	{
		i = 0;
		while (begin_list->next != NULL)
		{
			begin_list = begin_list->next;
			i++;
		}
		return (i + 1);
	}
	return (0);
}
