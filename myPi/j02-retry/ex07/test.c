/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:37:52 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/02 02:52:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_print_int(int n, int multiplier, int size)
{
	int cpt;
	int diff;
	int tmpn[size];

	cpt = 0;
	diff = 0;
	while (multiplier > 0)
	{
		if ((n / multiplier) < 0 || (n / multiplier) > 9)
			return (0);
		tmpn[cpt++] = n / multiplier;
		ft_putchar((n / multiplier) + 48);
		n = n % multiplier;
		multiplier = multiplier / 10;
	}
	while (size - cpt < size - 1)
	{
		cpt--;
		diff += tmpn[cpt] - tmpn[cpt - 1];
	}
	if (tmpn[size - 1] == 9 && diff == size - 1)
		return (1);
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}

void	ft_print_combn(int n)
{
	int mult;
	int nbr;
	int i;
	int skip;

	nbr = 0;
	while (1)
	{
		mult = 1;
		nbr++;
		skip = 0;
		i = 0;
		while (i < n - 1)
		{
			mult = mult * 10;
			i++;
			if ((nbr % mult) / (mult / 10) <= (nbr % (mult * 10) / (mult)))
				skip = 1;
		}
		if (skip == 1)
			continue;
		if (ft_print_int(nbr, mult, n) == 1)
			break ;
	}
}
