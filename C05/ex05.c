#include <unistd.h>
//#include <stdio.h>
int ft_sqrt(int nb)
{
    int i = 1;
    if(nb <= 0)
    {
        return nb;
    }
    else if(nb == 1)
    {
        return nb;
    }
    else
    {
        while(i <= nb / 2 && i < 46341) // if i > 46341 = overflow;
        {
            if(i * i == nb)
            {
                return i;
            }
            i++;
        }
    }
    return 0;
}
/*int main()
{
    printf("%d\n",ft_sqrt(81));
}*/