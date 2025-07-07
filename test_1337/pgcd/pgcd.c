#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_npo(int a,int b)
{
    int this = 1;
    int i = 1;
    while(i <= a)
    {
        if(a % i == 0 && b % i == 0)
        {
            this = i;
        }
        i++;
    }
    printf("%d",this);
}
void pgcd(int a , int b)
{
    if(a < 0 || b < 0)
    {
        return;
    }
    if(a < b)
    {
        ft_npo(a,b);
    }
    else
    {
        ft_npo(b,a);
    }
    
}
int main(int argc,char **argv)
{
    if(argc == 3)
    {
        pgcd(atoi(argv[1]),atoi(argv[2]));
    }
    printf("\n");
    return 0;
}