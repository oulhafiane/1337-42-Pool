/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 02:09:39 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 21:55:49 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr / 10 == 0)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
}

char	*found_and_calc(char *cpy, int *found)
{
	if (ft_foundinstr(cpy, "("))
	{
		cpy = ft_calculate_p(cpy);
		*found = 1;
	}
	else if (ft_foundinstr(cpy, "*%/"))
	{
		cpy = ft_calculate_mnd(cpy);
		*found = 1;
	}
	else if (ft_foundinstr(cpy, "+-"))
	{
		cpy = ft_calculate_as(cpy);
		*found = 1;
	}
	return (cpy);
}

int		eval_expr(char *str)
{
	int		found;
	char	*cpy;
	int		nb;

	cpy = ft_strdup(str);
	cpy = ft_strtrim(cpy);
	found = 1;
	while (found == 1)
	{
		found = 0;
		cpy = found_and_calc(cpy, &found);
	}
	nb = ft_atoi(cpy);
	ft_ultimate_free(cpy);
	return (nb);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
