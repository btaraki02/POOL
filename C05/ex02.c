#include <unistd.h>
//#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    int r = 1;
    if(nb == 0 || power < 0)
    {
        return 0;
    }
    if(power == 0)
    {
        return r;
    }
    while(power > 0)
    {
        r *= nb;
        power--;
    }
}
/*int main()
{
    printf("%d\n",ft_iterative_power(3,3));
    printf("%d\n",ft_iterative_power(42,0));
    printf("%d\n",ft_iterative_power(0,42));
    printf("%d\n",ft_iterative_power(-3,4));
    printf("%d\n",ft_iterative_power(3,-3));
}*/