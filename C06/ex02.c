#include <unistd.h>
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1 , &str[i] ,1);
        i++;
    }
    write(1 , "\n" ,1);
}
int main(int argc , char **argv)
{
    int i = argc - 1;
    while(i > 0)
    {
        ft_putstr(argv[i]);
        i--;
    }
    return 0;
}