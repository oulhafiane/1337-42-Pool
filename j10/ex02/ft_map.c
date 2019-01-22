/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:11:32 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/12 19:20:53 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_r;

	tab_r = (int*)malloc(sizeof(*tab_r) * length);
	i = 0;
	while (i < length)
	{
		tab_r[i] = f(tab[i]);
		i++;
	}
	return (tab_r);
}
