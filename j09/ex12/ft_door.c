/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:12:18 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/07 16:15:45 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

ft_bool		close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

ft_bool		open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door->state = OPEN;
	return (TRUE);
}

ft_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

ft_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	return (door->state == CLOSE);
}
