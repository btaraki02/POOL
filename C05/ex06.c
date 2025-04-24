#include <unistd.h>
//#include <stdio.h>
int ft_is_prime(int nb)
{
    int i = 2;
    while(i * i <= nb)//i <= nb but It's too slow.
    {
        if(nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
/*int main()
{
    int i = ft_is_prime(25);
    if(i == 1)
        printf("it's good\n");
    else 
    printf("it's not good\n");
}*/