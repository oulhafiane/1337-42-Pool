/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 02:09:39 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 21:20:46 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"
#include <stdio.h>
int		eval_expr(char *str)
{
	int		found;
	char 	*cpy;
	int		nb;

	cpy = ft_strdup(str);
	cpy = ft_strtrim(cpy);
	found = 1;
	while (found == 1)
	{
		found = 0;
		if (ft_foundinstr(cpy, "("))
		{
			cpy = ft_calculate_p(cpy);
			found = 1;
		}
		else if (ft_foundinstr(cpy, "*%/"))
		{
			cpy = ft_calculate_mnd(cpy);
			found = 1;
		}
		else if (ft_foundinstr(cpy, "+-"))
		{
			cpy = ft_calculate_as(cpy);
			found = 1;
		}
	}
	printf("Eval : %s, Str : %s\n", str, cpy);
	getchar();
	nb = ft_atoi(cpy);
	ft_ultimate_free(cpy);
	return (nb);
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
