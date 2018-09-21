/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:34:25 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/19 22:28:24 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# define NULL ((void*)0)

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

void			ft_list_reverse_fun(t_list *begin_list);

#endif
