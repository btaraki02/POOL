#include <unistd.h>
void ft_putchar_c(char c)
{
    write(1 , &c, 1);
}
int ft_number(char c , int n)
{
    int rest = 0;
    if(n == 0){
        rest = c / 10 + '0';
    }
    else {
        rest = c % 10 + '0';
    }
    return rest;
}
void ft_print_comb2(void)
{
    int a = 0;
    int b ;
    while(a <= 98)
    {
        b = a + 1;
        while( b <= 99)
        {
            ft_putchar_c(ft_number(a ,0));
            ft_putchar_c(ft_number(a ,1));
            ft_putchar_c(' ');
            ft_putchar_c(ft_number(b ,0));
            ft_putchar_c(ft_number(b ,1));
            if(!(a == 98 && b == 99))
            write(1 ,", ",2);
        b++;

        }
        a++;
    }
}