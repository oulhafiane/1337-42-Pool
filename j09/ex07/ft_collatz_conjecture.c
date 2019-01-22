/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 05:01:22 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/07 05:35:49 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	else if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2) + 1);
	else
		return (ft_collatz_conjecture(3 * base + 1) + 1);
}
