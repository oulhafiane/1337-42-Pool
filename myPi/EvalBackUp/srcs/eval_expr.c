/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 02:09:39 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 06:26:10 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

int		eval_expr(char *str)
{
	int	found;

	str = ft_strtrim(str);
	found = 1;
	while (found == 1)
	{
		found = 0;
		if (ft_foundinstr(str, "("))
		{
			str = ft_calculate_p(str);
			found = 1;
		}
		else if (ft_foundinstr(str, "*%/"))
		{
			str = ft_calculate_mnd(str);
			found = 1;
		}
		else if (ft_foundinstr(str, "+-"))
		{
			str = ft_calculate_as(str);
			found = 1;
		}
	}
	return (ft_atoi(str));
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
	//	eval_expr(argv[1]);
		ft_putstr(ft_itoa(eval_expr(argv[1])));
	}
	return (0);
}
