#include <unistd.h>
void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1 , &c , 1);
}
int main(int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        ft_putnbr(argc -1);
    }
    else
    {
        write(1 , "0" ,1);
    }
    write(1 , "\n" ,1);
    return 0;
}