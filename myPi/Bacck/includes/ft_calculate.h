/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 00:55:05 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/16 20:29:05 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALCULATE_H
# define FT_CALCULATE_H

void    ft_ultimate_free(char *str);

int     call_eval(char *str, int i_first, int i_last);

char	*ft_calculate_p(char *str);

char	*ft_calculate_as(char *str);

char	*ft_calculate_mnd(char *str);

#endif
