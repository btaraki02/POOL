#include <unistd.h>
//#include <stdio.h>
void hex_write(unsigned char H)
{
    const char *hex ="0123456789abcdef";
    write(1 , "\\" , 1);
    write(1 , &hex[ H / 16] , 1);
    write(1 , &hex[ H % 16] , 1);
}

void ft_putstr_non_printable(char *str)
{
    while(*str != '\0')
    {
        if(*str <= 126 && *str >= 32 )
        {
            write(1 , str , 1);
        }
        else
        {
            hex_write((unsigned char)*str);
        }
        str++;
    }
}
i/*nt main()
{
    char array[] = " Coucou\ntu vas bien ?";
    ft_putstr_non_printable(array);
    return 0;
}*/