/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:47:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/03 16:57:00 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_index_of_first_nbr(char *str)
{
	int i;
	int count_spaces;

	i = 0;
	count_spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			count_spaces++;
		else
			break ;
		i++;
	}
	return (count_spaces);
}

int		ft_atoi(char *str)
{
	int i;
	int multiplier;
	int nbr;
	int sign;

	i = ft_index_of_first_nbr(str);
	nbr = 0;
	multiplier = 1;
	sign = 0;
	while (str[i] != '\0' && str[i] != ' ')
	{
		if ((str[i] == '-' || str[i] == '+') && sign != 0)
			break ;
		if (str[i] == '-' || str[i] == '+')
			sign = str[i];
		else if (str[i] >= 48 && str[i] < 58)
			nbr = (nbr * 10) + (str[i] - 48);
		else if (str[i] != ' ')
			break ;
		multiplier = multiplier * 10;
		i++;
	}
	if (sign == 45)
		nbr = nbr * -1;
	return (nbr);
}
