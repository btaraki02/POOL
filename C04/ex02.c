#include <unistd.h>
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
{
    write(1 , "2147483648" , 12);
    return ;
}
    if(nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }

    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
   char c = nb % 10 + '0';
   write(1 , &c , 1);
}