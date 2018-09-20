/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:59:38 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/15 23:08:39 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_calculate_p(char *str)
{
	int		i_last;
	int		i_first;
	int		i;
	int		nb;

	i = 0;
	i_first = -1;
	i_last = -1;
	while (str[i] != '\0')
	{
		if (str[i] == 40 )
			i_first = i;
		else if (str[i] == 41 && i_first != -1)
		{
			i_last = i;
			break;
		}
		i++;
	}
	if (i_first != -1 && i_last != -1)
		nb = eval_expr(ft_str_subst(str,  i_first, i_last));
	return (ft_str_replace(str, i_first, i_last, nb);
}
