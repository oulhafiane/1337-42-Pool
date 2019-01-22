/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 02:28:29 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 10:49:18 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		search_in_base(char *nbr, char *str)
{
	int i;
	int j;
	int ok;

	i = 0;
	while (nbr[i] != '\0')
	{
		ok = 0;
		j = 0;
		while (str[j] != '\0')
		{
			if (nbr[i] == str[j])
			{
				ok = 1;
				nbr[i] = j + '0';
				break;
			}
			j++;
		}
		if (ok == 0)
			return (0);
		i++;
	}
	return (1);
}

int		check_base(char *nbr, char *str)
{
	int	i;
	int j;
	int	ok;

	if (str == NULL || str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = 0;
		ok = 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && i != j)
				ok = 0;
			j++;
		}
		if (ok == 0)
			return (0);
		i++;
	}
	return (search_in_base(nbr, str));
}

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, power - 1) * nb);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int nbr;
	int c;

	if (check_base(str, base) == 0)
		return (0);
	i = 0;
	nbr = 0;
	sign = 0;
	while (str[i] == ' ')
		i++;
	c = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = str[i];
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr += (str[i] - 48) * ft_recursive_power(ft_strlen(base), c++);
		printf("%d - %c - %d => %d", str[i]-'0', str[i], c-1, ft_recursive_power(ft_strlen(base), c));
		i++;
	}
	if (sign == '-')
		nbr = nbr * -1;
	return (nbr);
}
