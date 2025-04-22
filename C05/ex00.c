#include <unistd.h>
//#include <stdio.h>
int ft_iterative_factorial(int nb)
{
    int i = 1;
    int r = 1;
    if(nb < 0)
    {
        return 0;
    }
    while(i <= nb)//if(nb == 0 we have i = 1 and r = 1!;)
    {
        r = r * i;
        i++;
    }
    return r;
}
/*int main()
{
    printf("%d\n",ft_iterative_factorial(6));
}*/