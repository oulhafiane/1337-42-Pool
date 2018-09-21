/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 04:44:29 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/14 06:46:18 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str);

char	*ft_itoa(long nb, char *str);

int		ft_atoi_base(char *str, char *base);

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
