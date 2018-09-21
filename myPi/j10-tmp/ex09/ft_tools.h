/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 04:41:50 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 08:04:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H

# define FT_TOOLS_H

int				ft_putstr(char *str);

int				ft_usage(int a, int b);

int				ft_putnbr(int nbr);

int				ft_atoi(const char *str);

typedef	struct	s_opp
{
	char	*op;
	int		(*f)(int, int);
}				t_opp;

#endif
