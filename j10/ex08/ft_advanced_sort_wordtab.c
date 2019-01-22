/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 06:26:10 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 06:32:25 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i - 1], tab[i]) > 0)
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
