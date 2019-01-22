/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 01:53:20 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/21 02:34:12 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"

int		ft_read(char *path, long size, int print)
{
	char	buf;
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (1);
	if (print == 1)
	{
		ft_putstr("==> ");
		ft_putstr(path);
		ft_putstr(" <==\n");
	}
	lseek(fd, size * -1, SEEK_END);
	while (read(fd, &buf, 1))
		ft_putchar(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}
