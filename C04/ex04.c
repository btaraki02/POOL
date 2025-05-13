#include <unistd.h>
int doublechar(char *str)
{
    int i = 0;
    int j;
    while(str[i])
    {
        j = i + 1;
        while(str[j])
        {
            if(str[i] == str[j])
            {
                return 1;
            }
            j++;
        }
        i++;
    }
    return 0;
}
int Conditions(int n , char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == '-' || str[i] == '+')
        {
            return 1;
        }
        i++;
    }
    if(i < 2)
    {
        return 1;
    }
    if(doublechar(str))
    {
        return 1;
    }
    return 0;
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
void print_base(int number , int value , char *indx)
{
    long nmax = number;
    if(nmax < 0)
    {
        nmax = -nmax;
        write(1 , "-" , 1);
    }
    if(nmax >= value)
    {
        print_base(nmax / value, value, indx);
    }
    write(1 , &indx[nmax % value] , 1);
}
void ft_putnbr_base(int nbr, char *base)
{
   if(Conditions(nbr , base))
   {
        return;
   }
   int basevalue = ft_strlen(base);
   print_base(nbr , basevalue , base);
}
/*int main()
{
    ft_putnbr_base(42, "0123456789");  
    write(1, "\n", 1);
    ft_putnbr_base(-255, "01");             // OK (binary)
    write(1, "\n", 1);
    ft_putnbr_base(255, "0123456789ABCDEF"); // OK (hex)
    write(1, "\n", 1);
    ft_putnbr_base(42, "112345");           // No output (duplicate)
    write(1, "\n", 1);
    ft_putnbr_base(42, "0+123");            // No output (contains '+')
    write(1, "\n", 1);
}*/