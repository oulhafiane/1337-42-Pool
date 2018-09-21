/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:37:52 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/03 23:07:54 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn2(int n)
{
	int nbr;
	int multiplier;
	int i;
	char nb[n];
	int tmp;
	int skip;

	nbr = 0;
	do{
		nbr++;
		multiplier = 1;
		i = 0;
		while (i < n - 1)
		{
			multiplier = multiplier * 10;
			i++;
		}
		if (multiplier * 10 / nbr == 0)
			break;
		nb[i] = (nbr / multiplier) + 48;
		tmp = nbr;
		i = 0;
		while (tmp != 0)
		{
			nb[i] = (tmp / multiplier) + 48;
			tmp = tmp % multiplier;
			multiplier = multiplier / 10;
			i++;
		}
		i = 0;
		skip = 0;
		while (i < n)
		{
			if (nb[n - i - 1] <= nb[n - i - 2])
				skip = 1;
			i++;
		}
		i = 0;
		while (i < n && skip != 1)
		{	
			ft_putchar(nb[i]);
			i++;
		}
		if (skip == 1)
			continue;
		ft_putchar(',');
		ft_putchar(' ');
	}while (1);
}

void	ft_print_int(int n, int multiplier)
{
	int ok;

	ok = 0;
	while ( multiplier > 0)
	{
		ft_putchar((n / multiplier) + 48);
		if (n % 10 != 9)
			ok = 0;
		else if ((n / multiplier * 10) - ((n % multiplier * 10) / multiplier) != -1)
			ok = 1;
		n = n % multiplier;
		multiplier = multiplier / 10;
	}
	if (ok == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn3(int n)
{
	int multiplier;
	int nbr;
	int i;
	int skip;

	nbr = 0;
	do{
		nbr++;
		skip = 0;
		i = 0;
		multiplier = 1;
		while (i < n)
		{
			multiplier = multiplier * 10;
			i++;
			if ((nbr % multiplier) / (multiplier / 10) <= (nbr % (multiplier * 10) / (multiplier)))
				skip = 1;
		}
		if (skip == 1)
			continue;
		ft_print_int(nbr, multiplier / 10);
	}while (multiplier / nbr != 0);
	ft_putchar('.');
}

void	ft_print_combn(int n)
{
	int i;
	int skip;
	int nbr;
	int tmp;
	int nb[n];

	nbr = 0;
	while (nbr <= 99)
	{
		skip = 0;
		nbr++;
		i = 0;
		tmp = nbr;
		while (i < n)
		{
			nb[n - 1 - i] = tmp % 10;
			tmp = tmp / 10;
			if (nb[n - 1 - i] <= tmp % 10)
			{
				skip = 1;
				printf("\nSkipped %d\n", nbr);
				getchar();
			}
			i++;
		}
		if (skip == 1)
			continue;
//		ft_print_int(nb, n);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	main(void)
{
	ft_print_combn3(9);
	return (0);
}
