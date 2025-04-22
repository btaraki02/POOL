#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base)
{
    char temp[30];
     int nun ;
     int i = 0;
     if(nbr < 0)
     {
        write(1 , "-", 1);
        nun = -nbr; 
     }
     else
     {
        nun = nbr;
     }
     int j = 0;
     while(nun > 0 )
    {
        temp[j++] = nun % 2 + '0';
        nun /= 2;
    } 
    while(j > 0)
    {
        base[i] = temp[--j];
        j--;
        i++;
    }
    base[i] = '\0';
}
int main()
{
    char str[30];
    ft_putnbr_base(1, str);
    printf("%s\n",base);
}