#include <unistd.h>
void ft_putchar(char c)
{
    write(1 , &c , 1);
}
void ft_print_comb2(void)
{
    int a = '0';
    int b = '0';
    while(a <= '99')
    {
        b = '0';
        while(b <= '98')
        {
            ft_putchar(&a);
            ft_putchar(' ');
            ft_putchar(&b);
            b++;
        }
        a++;
    }
}
int main()
{
    ft_print_comb2();
}