/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 02:37:44 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 08:08:54 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc.h"

#include "ft_tools.h"

#include "ft_opp.h"

int		check_div_mod_zero(int nb, char op)
{
	if (nb == 0 && op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (nb == 0 && op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		(*f)(int, int);
	int		i;
	int		r;

	if (argc == 4)
	{
		i = 0;
		f = g_opptab[5].f;
		while (i < 5)
		{
			if (g_opptab[i].op[0] == argv[2][0])
				f = g_opptab[i].f;
			i++;
		}
		if (f == g_opptab[5].f)
			f(0, 0);
		else if (check_div_mod_zero(ft_atoi(argv[3]), argv[2][0]) == 1)
		{
			r = f(ft_atoi(argv[1]), ft_atoi(argv[3]));
			ft_putnbr(r);
			ft_putstr("\n");
		}
	}
	return (0);
}
