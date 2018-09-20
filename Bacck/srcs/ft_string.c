/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 05:07:06 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 20:58:36 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_all.h"
#include <stdio.h>
void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_str_subst(char *str, int i, int j)
{
	char	*new_str;
	int		cpt;

	new_str = (char*)malloc(sizeof(char*) * (j - i) + 1);
	cpt = 0;
	i++;
	while (i < j)
	{
		new_str[cpt] = str[i];
		i++;
		cpt++;
	}
	new_str[cpt] = '\0';
	return (new_str);
}

char	*ft_str_replace(char *str, int i, int j, int nb)
{
	char	*nb_str;
	char	*result;
	int		result_l;

	printf("str = %s , i = %d, j = %d, nb = %d\n", str, i, j, nb);
	getchar();
	nb_str = ft_itoa(nb);
	result_l = ft_strlen(str) - (j - i) + ft_strlen(nb_str);
	result = (char *)malloc(sizeof(char) * result_l + 10);
	result = ft_strncpy(result, str, (unsigned int)i);
	result = ft_strcat(result, nb_str);
	result = ft_strcat(result, str + j + 1);
	printf("result = %s, etr = %s , i = %d, j = %d, nb = %d\n", result, str, i, j, nb);
	getchar();
	ft_ultimate_free(str);
	return (result);
}

char	*ft_strtrim(char *str)
{
	char	*dest;
	int		srclength;
	int		i;
	int		j;

	i = 0;
	j = 0;
	srclength = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * srclength);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	ft_ultimate_free(str);
	return (dest);
}

int		ft_foundinstr(char *str, char *tofind)
{
	int strlength;
	int tofindlength;
	int i;
	int j;

	strlength = ft_strlen(str);
	tofindlength = ft_strlen(tofind);
	i = 0;
	while (i < tofindlength)
	{
		j = 0;
		while (j < strlength)
		{
			if (str[j] == tofind[i] && (j != 0 || str[j] == '('))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
