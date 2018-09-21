/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:50:53 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/03 23:16:34 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i < nb + 1)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
