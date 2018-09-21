/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 04:12:29 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/10 04:31:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len_src;

	i = 0;
	j = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (i < len_src)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\n';
	dest[j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	int		i;
	char	*p;

	i = 0;
	len = 0;
	while (i < argc)
	{
		len = len + ft_strlen(argv[i]);
		i++;
	}
	p = (char*)malloc(sizeof(*p) * len + argc);
	i = 1;
	while (i < argc)
	{
		ft_strcat(p, argv[i]);
		i++;
	}
	return (p);
}
