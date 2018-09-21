/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:25:43 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/12 10:27:33 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_taille(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0' || dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*param;
	int					i;

	param = (struct s_stock_par*)malloc(sizeof(struct s_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		param[i].size_param = ft_taille(av[i]);
		param[i].str = av[i];
		param[i].copy = (char*)malloc(sizeof(char*) * ft_taille(av[i]) + 10);
		ft_strcpy(param[i].copy, av[i]);
		param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	param[i].str = 0;
	return (param);
}
