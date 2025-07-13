#include <unistd.h>
void ft_put(int c)
{
    c += '0';
    write(1 , &c ,1);
}
void ft_print_comb2(void)
{
    int a = 0;
    int b ; 
    while(a <= 98)
    {
        b = a + 1;
        while(b <= 99)
        {
            ft_put(a / 10);
            ft_put(a % 10);
            write(1 , " " ,1);
            ft_put(b / 10);
            ft_put(b % 10);
            if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
            b++;
        }
        a++;
    }
}