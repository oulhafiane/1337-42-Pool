/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 04:21:47 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/14 07:38:27 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int     ft_atoi(const char *str)
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_itoa(int  nbr, char *str)
{
	long	nb;
	long	tmp_nb;
	char	*cpy_str;
	long	cpy_nb;

	cpy_str = str;
	nb = (long)nbr;
	cpy_nb = nb;
	if (nb < 0)
	{
		*str++ = '-';
		nb = nb * -1;
	}
	tmp_nb = 0;
	while (nb / 10 != 0)
	{
		tmp_nb = (nb % 10) + (10 * tmp_nb);
		nb = nb / 10;
	}
	tmp_nb = (nb % 10) + (10 * tmp_nb);
	while (tmp_nb / 10 != 0)
	{
		*str++ = (tmp_nb % 10) + 48;
		tmp_nb = tmp_nb / 10;
	}
	*str++ = (tmp_nb % 10) + 48;
	if (cpy_nb % 10 == 0)
		*str = '0';
	return (cpy_str);
}

int		ft_atoi_base(char *str, char *base)
{
	long	nbr;
	long	nb;
	int		sign;
	int		len;
	char	r[20];

	sign = 1;
	nb = (long)ft_atoi(str);
	if (nb < 0)
	{
		sign = -1;
		nb = nb * -1;
	}
	len = ft_strlen(base);
	nbr = 0;
	if (nb >= len)
		nbr = ft_atoi_base(ft_itoa(nb / len, r), base);
	return (sign * ((nbr * 10) + (nb % len)));
}
