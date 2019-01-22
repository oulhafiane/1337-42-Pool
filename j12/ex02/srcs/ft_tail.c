/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 01:27:38 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/21 03:48:48 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

void	ft_show_error(char *s)
{
	write(2, s, ft_strlen(s));
}

void	show_error(char *s1, char *s2)
{
	ft_show_error(s1);
	ft_show_error(": ");
	ft_show_error(s2);
	ft_show_error(": No such file or directory\n");
}

int		check_file(int ac, char **av)
{
	int i;
	int fd;
	int	c;

	c = 0;
	i = 3;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd != -1)
			c++;
		i++;
	}
	return (c);
}

int		main(int argc, char **argv)
{
	int i;
	int	c;
	int r;

	c = check_file(argc, argv) + 3;
	if (argc == 4 && argv[1][0] == '-' && argv[1][1] == 'c')
	{
		ft_read(argv[3], ft_atoi(argv[2]), 0);
	}
	else if (argc > 4 && argv[1][0] == '-' && argv[1][1] == 'c')
	{
		i = 3;
		while (i < argc)
		{
			r = ft_read(argv[i], ft_atoi(argv[2]), 1);
			if (r == 1)
				show_error(argv[0], argv[i]);
			if (i < c & r != 1)
				ft_putchar('\n');
			i++;
		}
	}
}
