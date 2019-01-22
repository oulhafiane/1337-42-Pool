/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 00:58:04 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 04:54:11 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_2_H
# define FT_STRING_2_H

int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strdup(char *src);
#endif
