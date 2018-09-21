/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:47:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/08/31 13:17:00 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	nbr2 = nbr1 + 1;
	while (nbr1 < 99)
	{
		ft_putchar((nbr1 / 10) + 48);
		ft_putchar((nbr1 % 10) + 48);
		ft_putchar(' ');
		ft_putchar((nbr2 / 10) + 48);
		ft_putchar((nbr2 % 10) + 48);
		if (nbr1 < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		nbr2++;
		if (nbr2 >= 100)
		{
			nbr1++;
			nbr2 = nbr1 + 1;
		}
	}
}
