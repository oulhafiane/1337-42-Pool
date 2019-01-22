/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 01:44:35 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/10 02:09:56 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*p;
	int		minn;

	if (min >= max)
	{
		p = ((void*)0);
	}
	else
	{
		p = (int*)malloc(sizeof(*p) * (max - min));
		minn = min;
		while (min < max)
		{
			p[min - minn] = min;
			min++;
		}
	}
	return (p);
}
