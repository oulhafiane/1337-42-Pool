/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:37:19 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/03 23:56:54 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int puissance;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	puissance = nb;
	while (i < power - 1)
	{
		puissance = puissance * nb;
		i++;
	}
	return (puissance);
}
