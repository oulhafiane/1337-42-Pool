/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:40:17 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/09 05:03:15 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find, int *eos)
{
	int i;
	int j;
	int k;
	int found;

	i = 0;
	to_find[*eos] = '\0';
	*eos = 0;
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
			return (str + found + k);
		i++;
	}
	return (0);
}

int		is_match(char *s1, char *s2, int j, int found)
{
	char	tmp[256];
	int		i;

	i = 0;
	while (s2[i] != '\0' || found == 1)
	{
		if (found == 1 && (s2[i] == '*' || s2[i] == '\0'))
		{
			s1 = ft_strstr(s1, tmp, &j);
			if (s1 == 0)
				return (0);
			else if (s2[i] == '\0' && s1[0] == '\0')
				return (1);
			tmp[0] = '\0';
			found = 0;
		}
		else if (found != 0 || s2[i] != '*')
		{
			tmp[j] = s2[i];
			found = 1;
			j++;
		}
		i++;
	}
	return (1);
}

int		match(char *s1, char *s2)
{
	if (s2[0] != '*' && s2[0] != s1[0])
		return (0);
	return (is_match(s1, s2, 0, 0));
}
