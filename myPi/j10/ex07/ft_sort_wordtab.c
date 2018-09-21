/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 05:54:12 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 06:15:39 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			break ;
		}
		i++;
	}
	return (diff);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		edited;
	char	*tmp;

	edited = 1;
	while (edited == 1)
	{
		edited = 0;
		i = 1;
		while (tab[i] != 0)
		{
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				tmp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmp;
				edited = 1;
			}
			i++;
		}
	}
}
