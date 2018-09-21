/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:36:14 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/17 18:36:37 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list*)malloc(sizeof(t_list));
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}
