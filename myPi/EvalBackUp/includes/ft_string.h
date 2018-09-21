/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 00:56:16 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 03:00:28 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

void	ft_putstr(char *str);

char	*ft_str_subst(char *str, int i, int j);

char	*ft_str_replace(char *str, int i, int j, int nb);

char	*ft_strtrim(char *str);

int		ft_foundinstr(char *str, char *tofind);

#endif
