#include <stdio.h>
#include <unistd.h>
int ft_doble(char *s1,char *s2)
{
    int i = 0;
    while(s1[i] || s2[i])
    {
        if(s1[i] != s2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int ft_dazt(char **str ,char *arr, int len )
{
    int i = 1;
    while(i < len)
    {
        if(ft_doble(str[i],arr))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1 , &str[i] ,1);
        i++;
    }
}
int main(int argc , char **argv)
{
    int j;
    int i = 1;
    while(i < argc)
    {
        j = i + 1;
        while(j < argc)
        {
            if(ft_doble(argv[i],argv[j]) && ft_dazt(argv , argv[i] , i))
            {
                ft_putstr(argv[i]);
                write(1 , "\n" ,1);
            }
            j++;
        }
        i++;
    }

}