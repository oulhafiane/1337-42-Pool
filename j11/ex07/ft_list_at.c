/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 01:50:38 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 12:39:08 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

unsigned int	ft_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i + 1);
}

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*cpy_elem;

	if (begin_list != NULL)
	{
		if (nbr >= ft_size(begin_list))
			return (NULL);
		i = 0;
		cpy_elem = begin_list;
		while (i < nbr)
		{
			cpy_elem = cpy_elem->next;
			i++;
		}
		return (cpy_elem);
	}
	return (NULL);
}
