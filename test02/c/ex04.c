/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 01:03:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/08/30 16:20:17 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(c)
{
	write(1, &c, 1);
	return 0;
}

int main()
{
	int i,j,k;

	i = 48;
	while (i < 58)
	{
		j = i+1;
		while (j < 58)
		{
			k = j+1;
			while(k < 58)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				ft_putchar(',');
				ft_putchar(' ');
				k++;
			}
			j++;
		}
		i++;	
	}
	return 0;
}
