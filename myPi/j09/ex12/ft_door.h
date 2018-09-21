/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:03:08 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/07 16:12:47 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

# define FT_DOOR_H

# include <unistd.h>

# define TRUE 1

# define FALSE 0

# define OPEN 1

# define CLOSE 0

typedef	int	ft_bool;

typedef	struct	s_door
{
	int		state;
}				t_door;

ft_bool		close_door(t_door *door);

ft_bool		open_door(t_door *door);

ft_bool		is_door_open(t_door *door);

ft_bool		is_door_close(t_door *door);

#endif
