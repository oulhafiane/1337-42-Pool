/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 21:26:18 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 21:58:23 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

void	ft_ultimate_free(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	free(str);
}

int		call_eval(char *str, int i_first, int i_last)
{
	char	*tmp;
	int		nb;

	tmp = ft_str_subst(str, i_first, i_last);
	nb = eval_expr(tmp);
	ft_ultimate_free(tmp);
	return (nb);
}
