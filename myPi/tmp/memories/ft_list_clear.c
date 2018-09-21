/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 01:27:53 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 11:31:43 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	while (begin_list[0]->next != NULL)
	{
		free(begin_list[0]);
		begin_list[0] = begin_list[0]->next;
	}
	free(begin_list[0]);
	begin_list[0] = NULL;
}
