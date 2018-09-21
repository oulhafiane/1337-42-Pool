/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:09:31 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/04 09:09:00 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new_word = 0;
		}
		else if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		else if ((str[i] < 'a' || str[i] > 'z') &&
								(str[i] < 'A' || str[i] > 'Z'))
			new_word = 1;
		else if (new_word == 1 && str[i] >= 'A' && str[i] <= 'Z')
			new_word = 0;
		i++;
	}
	return (str);
}
