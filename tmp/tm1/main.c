/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 06:16:57 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 06:22:36 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char	**tab;
	int		i;

	tab = ft_split_whitespaces("   Salam  ana zakariaa Oulhafiane aaa abbc abd ww zz   ");
	ft_sort_wordtab(tab);
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
