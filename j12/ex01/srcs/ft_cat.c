/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 00:34:57 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/21 03:16:01 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

void	cat_alone(void)
{
	char	c;

	c = 0;
	while (read(0, &c, 1))
	{
		ft_putchar(c);
	}
}

void	show_error(char *s1)
{
	write(2, s1, ft_strlen(s1));
}

int		main(int argc, char **argv)
{
	int i;

	if (argc <= 1)
	{
		cat_alone();
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (ft_read(argv[i]) == 1)
			{
				show_error(argv[0]);
				show_error(": ");
				show_error(argv[i]);
				show_error(": No such file or directory\n");
			}
			i++;
		}
	}
	return (0);
}
