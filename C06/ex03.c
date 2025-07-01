#include <unistd.h>
void ft_swap_adrs(char **s1 , char **s2)
{
    char *swap;
    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}
int ft_strcmp(char *str,char *srf)
{
    int i = 0;
    while(str[i] && srf[i])
    {
        if(str[i] != srf[i])
        {
            return (str[i] - srf[i]);
        }
        i++;
    }
    return (str[i] - srf[i]);
}
void ft_pes(char **argv, int size)
{
    int i = 1;
    int j;
    while(argv[i])
    {
        j = i + 1;
        while(argv[j])
        {
            if(ft_strcmp(argv[i],argv[j]) > 0)
            {
                ft_swap_adrs(&argv[i],&argv[j]);
            }
            j++;
        }
        i++;
    }
}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1 , &str[i++] ,1);
    }
    write(1 , "\n" ,1);
}
int main(int argc , char **argv)
{
    int len = argc - 1;
    ft_pes(argv,len);
    int i = 1;
    while(argv[i])
    {
        ft_putstr(argv[i]);
        i++;
    }
    return 0;
}