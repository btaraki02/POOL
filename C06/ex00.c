#include <unistd.h>
void ft_put(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1 , &str[i] ,1);
        i++;
    }
}
int main(int argc,char **argv)
{
    ft_put(argv[0]);
    write(1 , "\n" ,1);
    return 0;
}