/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:27:46 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/08 12:42:35 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	char	tab[9][9];
	int		i;
	int		j;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < 9)
		{
			tab[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < 9)
		{
			printf("%c", tab[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
