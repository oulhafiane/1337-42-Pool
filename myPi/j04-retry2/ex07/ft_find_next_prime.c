/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 01:48:43 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/06 04:39:35 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int is_prime;

	if (nb <= 1)
		return (0);
	i = 2;
	is_prime = 1;
	while (i < nb / 2 + 1)
	{
		if (nb % i == 0)
			is_prime = 0;
		i++;
	}
	return (is_prime);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
