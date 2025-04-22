#include <unistd.h>
//#include <stdio.h>
int ft_recursive_factorial(int nb)
{
    int i = 1;
    if(nb < 0)
    {
        return 0;
    }
    else if(nb == 0)
    {
        return 1;
    }
    else
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
}