/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:18:08 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/05 00:31:38 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int len_dst;
	int total_length;

	i = 0;
	len_dst = ft_strlen(dest);
	j = len_dst;
	total_length = len_dst + ft_strlen(src);
	if ((unsigned)j >= size)
		return (total_length - (j - size));
	while (src[i] != '\0' && (unsigned)(i + len_dst) < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (total_length);
}
