/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 02:52:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/04 02:52:27 by zoulhafi         ###   ########.fr       */
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
	int nbr;
	int debut;

	debut = ft_index_of_first_nbr(str);
	i = debut;
	nbr = 0;
	while (str[i] != '\0' && ((str[i] >= 48 && str[i] < 58) ||
				(i == debut && (str[i] == '-' || str[i] == '+'))))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			continue;
		}
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	if (str[debut] == '-')
		nbr = nbr * -1;
	return (nbr);
}
