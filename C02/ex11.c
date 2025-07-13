#include <unistd.h>
void ft_hex(unsigned char c)
{
    char hex[] = "0123456789abcdef";
    write(1 , "\\" ,1);
    write(1 , &hex[ c / 16] ,1);
    write(1 , &hex[ c % 16] ,1);
}
void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] <= 126 && str[i] >= 32)
        {
            write(1 , &str[i] ,1);
        }
        else
        {
            ft_hex((unsigned char)str[i]);
        }
        i++;
    }
}