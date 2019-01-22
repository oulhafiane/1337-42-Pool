/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:39:42 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/02 18:35:15 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_putchar(char c);

void	print_first_column(int cy, int y)
{
	if (cy == 1)
		ft_putchar('A');
	else if (cy == y)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int cx;
	int cy;

	cy = 1;
	while (cy <= y)
	{
		print_first_column(cy, y);
		cx = 2;
		while (cx <= x)
		{
			if (cx == x && cy == 1)
				ft_putchar('C');
			else if (cx == x && cy == y)
				ft_putchar('A');
			else if (cy != y && cy != 1 && cx != x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
