#include <unistd.h>
void ft_putchr(char c)
{
    write(1 , &c , 1); 
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1 , "-2147483648" ,11);
        return;
    }
    if(nb < 0)
    {
        ft_putchr('-');
        nb = -nb;
    }
    if(nb > 9)
    {
        ft_putnbr(nb /10);
    }
    ft_putchr(nb % 10 + '0');
}