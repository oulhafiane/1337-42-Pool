/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:49:31 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/13 19:22:42 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int	count_p;
	int	count_n;
	int	count_e;

	count_e = 0;
	count_p = 0;
	count_n = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			count_n++;
		else if (f(tab[i], tab[i + 1]) < 0)
			count_p++;
		else
			count_e++;
		i++;
	}
	if (count_n == 0 || count_p == 0)
		return (1);
	else
		return (0);
}
