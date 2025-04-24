//#include <stdio.h>
#include <unistd.h>
int ft_is_prime(int nb)//ex06 man !!
{
    int i = 2;
    while(i * i <= nb)
    {
        if(nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int ft_find_next_prime(int nb)
{
     while(!ft_is_prime(nb))// it's esy!> my love chatgpt hhh
     {
        nb++;
     }
     return nb;
}
/*int main()
{
    printf("%d\n",ft_find_next_prime(25));
}*/