/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:23:17 by exam              #+#    #+#             */
/*   Updated: 2018/09/14 04:44:24 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int nbr;
	int c;

	i = 0;
	nbr = 0;
	sign = 0;
	while (str[i] == ' ')
		i++;
	c = i;
	while ((str[i] >= '0' && str[i] <= '9') ||
			(c == i && sign == 0 && (str[i] == '-' || str[i] == '+')))
	{
		if (str[i] == '-' || str[i] == '+')
			sign = str[i];
		else
			nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	if (sign == '-')
		nbr = nbr * -1;
	return (nbr);
}
