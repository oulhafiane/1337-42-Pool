/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 23:47:53 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/07 01:33:54 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_to_rot42(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			str[i] = str[i];
		else if((str[i] + 16 > 'z') || (str[i] + 16 > 'Z' && str[i] <= 'Z'))
			str[i] = str[i] + 16 - 26;
		else
			str[i] = str[i] + 16;
		i++;
	}
	return str;
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			str[i] = str[i];
		else if ((str[i] - 16 < 'A') || (str[i] - 16 < 'a' && str[i] >= 'a'))
			str[i] = str[i] - 16 + 26;
		else
			str[i] = str[i] - 16;
		i++;
	}
	return str;
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_rot42(argv[1]));
	printf("%s\n", ft_rot42(argv[1]));
	return (0);
}
