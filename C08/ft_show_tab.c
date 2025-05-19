#include <unistd.h>
#include "ft_stock_str.h"
void ft_putstr(char *str)
{
    while(*str)
        write(1 , str++, 1);
}
void ft_put(char c)
{
    write(1 , &c ,1 );
}
void ft_putnbr(int nb)
{
        if(nb == -2147483648)
    {
        ft_putstr("-2147483648");
        return ;
    }
    if(nb < 0)
    {
        ft_put('-');
        nb *= -1;
    }
    if(nb >= 10) //this is E
    {
        ft_putnbr(nb / 10);
        nb %= 10;
    }
    ft_put(nb + '0');
}

void ft_show_tab(struct s_stock_str *par)
{
    int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
int main(int argc, char **argv)
{
    t_stock_str *arr = ft_strs_to_tab(argc - 1, argv + 1);
    ft_show_tab(arr);
    return 0;
}
