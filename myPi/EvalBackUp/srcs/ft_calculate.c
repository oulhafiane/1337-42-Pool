/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onahiz <onahiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 05:04:49 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 07:40:29 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

char	*ft_calculate_p(char *str)
{
	int		i_last;
	int		i_first;
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	i_first = -1;
	i_last = -1;
	while (str[i] != '\0')
	{
		if (str[i] == 40)
			i_first = i;
		else if (str[i] == 41 && i_first != -1)
		{
			i_last = i;
			break ;
		}
		i++;
	}
	if (i_first != -1 && i_last != -1)
		nb = eval_expr(ft_str_subst(str, i_first, i_last));
	return (ft_str_replace(str, i_first, i_last, nb));
}

char	*ft_calculate_as(char *str)
{
	int     i_as;
	int     i;
	int     nb;
	int     ok;

	ok = 0;
	i = -1;
	i_as = -1;
	while (str[++i] != '\0')
	{
		if ((str[i] == '+' || str[i] == '-') && i_as == -1 && i != 0)
		{
			i_as = i;
			nb = ft_atoi(ft_str_subst(str, -1, i)) + ft_atoi(str + i);
		}
		else if ((str[i] == '+' || str[i] == '-') && i != 0)
		{
			ok = 1;
			i_as = i;
			break ;
		}
	}
	if (!ok)
		i_as = ft_strlen(str);
	return (ft_str_replace(str, 0, i_as - 1, nb));
}

int		*ft_find_index(char *str, int *idx)
{
	idx[0] = 0;
	idx[1] = 0;
	idx[2] = 0;
	while (str[idx[2]])
	{
		if (str[idx[2]] == '*' || str[idx[2]] == '/' || str[idx[2]] == '%')
		{
			idx[0] = idx[2] - 1;
			idx[1] = idx[2] + 1;
			while (str[idx[0]] > 47 && str[idx[0]] < 58 && str[idx[0] - 1])
				idx[0]--;
			while (str[idx[1]] > 47 && str[idx[1]] < 58)
				idx[1]++;
			break ;
		}
		idx[2]++;
	}
	return (idx);
}

char	*ft_calculate_mnd(char *str)
{
	int		nb;
	int		nbr[2];
	int		*index;

	index = (int *)malloc(sizeof(int) * 3);
	index = ft_find_index(str, index);
	nbr[0] = ft_atoi(str + index[0]);
	nbr[1] = ft_atoi(str + index[2] + 1);
	if (str[index[2]] == '*')
		nb = nbr[0] * nbr[1];
	if (str[index[2]] == '/')
		nb = nbr[0] / nbr[1];
	if (str[index[2]] == '%')
		nb = nbr[0] % nbr[1];
	return (ft_str_replace(str, index[0] ? index[0] + 1 : index[0], index[1] - 1 , nb));
}
