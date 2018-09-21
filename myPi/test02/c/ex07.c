#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_comb2(int nb)
{
    int i;
    int j;
    int k;
    int h;
    int n1;
    int n2;
    
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
    int nbr;
    int multiplier;
    int tmpn;
    int i;
    
    i = 1;
    nbr = 0;
    multiplier = 1;
    while (i < n)
    {
        multiplier = multiplier * 10;
        i++;
    }
    nbr = 11;
    while (nbr < 12)
    {
        nbr++;
        tmpn = nbr;
        i = 0;
        while(i < n)
        {
            ft_putchar((tmpn / multiplier) + 48);
            printf("\n %d , %d , %d \n", tmpn, multiplier, tmpn / multiplier);
            tmpn = tmpn * 10;
            i++;
        }
        ft_putchar(' ');
        ft_putchar(',');
    }
}


int main()
{
    ft_print_combn(6);
    return (0);
}

