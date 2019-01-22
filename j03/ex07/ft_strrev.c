/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 01:22:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/03 18:18:26 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int c;

	j = 0;
	i = ft_strlen(str);
	while (j < i / 2)
	{
		c = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = c;
		j++;
	}
	return (str);
}
