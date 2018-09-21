/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 00:56:29 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/02 21:07:23 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua(int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < i + 3)
		{
			k = 0;
			while (k++ < size - 1 -i)
				ft_putchar(' ');
			k = 0;
			ft_putchar('/');
			while (k++ < size * 2 - i)
				ft_putchar('*');
			ft_putchar('\\');
			ft_putchar('\n');
			j++;
		}
		//printf("8888888888888\n");
		i++;
	}
}

int	main(void)
{
	sastantua(5);
	return (0);
}
