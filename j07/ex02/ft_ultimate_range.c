/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 02:14:26 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/10 04:11:11 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		minn;
	int		*p;

	if (min >= max)
	{
		p = ((void*)0);
		*range = p;
		return (0);
	}
	else
	{
		p = (int*)malloc(sizeof(int) * (max - min));
		minn = min;
		while (min < max)
		{
			p[min - minn] = min;
			min++;
		}
	}
	*range = p;
	return (min - minn);
}
