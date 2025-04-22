#include <unistd.h>
//#include <stdio.h>
int ft_recursive_power(int nb, int power)
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
    else
    {
     r = nb * ft_recursive_power(nb, power -1);
    }
    //we don't need return r //10//power == 0;}
}
/*int main()
{
    printf("%d\n",ft_recursive_power(3,3));
    printf("%d\n",ft_recursive_power(42,0));
    printf("%d\n",ft_recursive_power(0,42));
    printf("%d\n",ft_recursive_power(-3,4));
    printf("%d\n",ft_recursive_power(3,-3));
}*/