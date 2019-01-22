/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 02:45:26 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 02:48:29 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	}
	return (0);
}
