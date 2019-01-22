/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 03:18:19 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 04:54:04 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	unsigned nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

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
