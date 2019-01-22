/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 04:51:44 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/10 16:00:55 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		count_spaces(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			count++;
		i++;
	}
	if (str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == ' ')
		return (count);
	else
		return (count + 1);
}

int		is_empty_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;
	char	*mot;

	tab = (char**)malloc(sizeof(int) * count_spaces(str));
	mot = (char*)malloc(sizeof(mot) * 256);
	i = -1;
	j = 0;
	k = 0;
	while (++i <= ft_strlen(str))
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (is_empty_str(mot))
				tab[k++] = mot;
			mot = (char*)malloc(sizeof(mot) * 256);
			j = 0;
		}
		else
			mot[j++] = str[i];
	}
	tab[k] = 0;
	return (tab);
}
