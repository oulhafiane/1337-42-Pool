/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:23:46 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/08/31 12:03:28 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
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
}
