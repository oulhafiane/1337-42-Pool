/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 05:45:46 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/07 06:08:43 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int diff;

	i = 0;
	j = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] == ' ' || s1[i] == '\t')
		{
			i++;
			continue ;
		}
		diff = s1[i] - s2[j];
		if (diff != 0)
		{
			break ;
		}
		j++;
		i++;
	}
	return (diff);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(ft_strlowcase(argv[i]), "president") == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		else if (ft_strcmp(ft_strlowcase(argv[i]), "attack") == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		else if (ft_strcmp(ft_strlowcase(argv[i]), "bauer") == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		i++;
	}
	return (0);
}
