/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 05:21:42 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/04 17:17:50 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int found;

	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		j = i;
		found = j;
		while (to_find[k] != '\0')
		{
			if (str[j] != to_find[k])
				found = -1;
			k++;
			j++;
		}
		if (found != -1)
			return (str + found);
		i++;
	}
	return (0);
}
