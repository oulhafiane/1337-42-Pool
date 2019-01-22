/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 02:37:44 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 05:21:22 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_calc.h"

#include "../includes/ft_tools.h"

void	afficher_resultat(char **argv, int (*f[11])(int, int))
{
	int		op;
	int		r;

	op = (int)argv[2][0] - 37;
	if (op != 0 && op != 5 && op != 6 && op != 8 && op != 10)
		r = 0;
	else if (ft_atoi(argv[3]) == 0 && op == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	else if (ft_atoi(argv[3]) == 0 && op == 10)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	else
		r = f[op](ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putnbr(r);
	ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	int		(*f[11])(int, int);

	if (argc == 4)
	{
		f[0] = &ft_mod;
		f[5] = &ft_mul;
		f[6] = &ft_add;
		f[8] = &ft_sub;
		f[10] = &ft_div;
		afficher_resultat(argv, f);
	}
	return (0);
}
