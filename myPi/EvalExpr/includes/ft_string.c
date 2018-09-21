/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 03:37:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/15 04:12:55 by zoulhafi         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_str_subst(char *str, int i, int j)
{
	int		len;
	char	*new_str;
	int		cpt;

	new_str = (char*)malloc(sizeof(char*) * (j - i) + 5);
	cpt = 0;
	i++;
	while (i < j)
	{
		new_str[cpt] = str[i];
		i++;
		cpt++;
	}
	new_str[cpt] = '\0';
	return (new_str);
}

char	*ft_str_replace(char *str, int i, int j, int nb)
{
	
}
