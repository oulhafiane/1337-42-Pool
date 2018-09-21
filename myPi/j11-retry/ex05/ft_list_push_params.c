/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 01:01:58 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 12:20:28 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	elem->next = begin_list[0];
	begin_list[0] = elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	int		i;

	elem = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		ft_front(&elem, av[i]);
		i++;
	}
	return (elem);
}
