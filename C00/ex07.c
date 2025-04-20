#include <unistd.h>
void ft_put(char c)
{
    write(1 , &c ,1 );
}
void ft_putnbr(int nb)
{
    if(nb < 0)
    {
        ft_put('-');
        nb *= -1;
    }
    if(nb == -2147483648)
    {
        write(1 , "2147483648" , 12);
        return ;
    }
    if(nb >= 10) //this is E
    {
        ft_putnbr(nb / 10);
        nb %= 10;
    }
    ft_put(nb + '0');
}