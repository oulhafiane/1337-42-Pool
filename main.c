/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 02:03:43 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/07 02:06:31 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_antidote(int i, int j, int k);

int		main(int argc, char **argv)
{
	if(argc == 4)
		printf("%d", ft_antidote(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	return (0);
}
