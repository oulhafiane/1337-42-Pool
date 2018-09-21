/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:03:01 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/05 01:41:17 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char dest[100] = "Salam iiaiai";
	char src[100] = "Zakardfiaa";
	int n;

	n = strlcpy(dest, src, 4);
	printf("%d, %s, %s, %d\n", ft_strlen(dest), dest, src, n);
	return (0);
}
