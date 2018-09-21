/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:50:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 19:18:10 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_test(int a, int b)
{
	return (a - b);
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;
	
	tab = (int*)malloc(sizeof(*tab) * argc);
	i = 1;
	while (i < argc)
	{
		tab[i - 1] = atoi(argv[i]);
		i++;
	}
	printf("%d\n", ft_is_sort(tab, argc - 1, &ft_test));
	return (0);
}
