/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 01:53:20 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/21 03:22:10 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

int		ft_read(char *path)
{
	char	buf;
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error Openning File.");
		return (1);
	}
	while (read(fd, &buf, 1))
		ft_putchar(buf);
	if (close(fd) == -1)
	{
		ft_putstr("Error Clonsing File.");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		return (ft_read(argv[1]));
	}
	return (0);
}
