/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:06:58 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/08/31 11:52:41 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_comb2tmp(void)
{
    int nbr1;
    int nbr2;
    
    nbr1 = 0;
    nbr2 = nbr1 + 1;
    while(nbr1 < 99)
    {
        //printf("%d %d, ", nbr1, nbr2);
        ft_putchar((nbr1 / 10) + 48);
        ft_putchar((nbr1 % 10) + 48);
        ft_putchar(' ');
        ft_putchar((nbr2 / 10) + 48);
        ft_putchar((nbr2 % 10) + 48);
        if(nbr1 < 98)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        nbr2++;
        if(nbr2 >= 100)
        {
            nbr1 ++;
            nbr2 = nbr1 + 1;
        }
    }
}

void    ft_print_comb2(void)
{
    int i;
    int j;
    int k;
    int h;
    
    i = 48;
    while (i < 58)
    {
        j = 48;
        while (j < 58)
        {
            k = 48;
            while (k < 58)
            {
                h = 48;
                while ( h < 58)
                {
                    int n1;
                    int n2;
                    
                    n1 = ((i - 48) * 10) + (j - 48);
                    n2 = ((k - 48) * 10) + (h - 48);
                    
                    if(n1 < n2)
                    {
                        ft_putchar(i);
                        ft_putchar(j);
                        ft_putchar(' ');
                        ft_putchar(k);
                        ft_putchar(h);
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                    h++;
                }
                k++;
            }
            j++;
        }
        i++;
    }
}

void    ft_putnbr(int nb)
{
    unsigned int    nbr;
    
    if (nb < 0)
    {
        ft_putchar('-');
        nbr = nb * -1;
    }
    else
        nbr = nb;
    
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    
    ft_putchar(nbr % 10 + 48);
}

void    ft_putnbrtmp(int nb)
{
    int n1;
    int n2;
    int c;
    
    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    c = 1;
    n2 = nb;
    while (n2 > 0)
    {
        n1 = n2 % 10;
        n2 = n2 / 10;
        c = c * 10;
    }
    
    n2 = nb;
    c = c / 10;
    while (c > 0)
    {
        n1 = n2 / c;
        n2 = n2 % c;
        ft_putchar(n1 + 48);
        c = c / 10;
    }
}

void ft_print_combn(int n)
{
    
}


int main()
{
	ft_print_comb2tmp();
    // printf(" %d ", 185/100);
   // ft_putnbrtmp(-923100011);
    // ft_putnbr(23100011);
    //  ft_print_combn(2);
    return (0);
}
