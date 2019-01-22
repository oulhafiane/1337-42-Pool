/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 04:26:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/06 01:27:01 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while ((unsigned)i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ((unsigned)i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
